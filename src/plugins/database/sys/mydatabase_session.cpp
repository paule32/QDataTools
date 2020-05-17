// --------------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2020 Jens Kallup
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// --------------------------------------------------------------------------------
#include "mydatabase.h"

#include <QString>
#include <QByteArray>
#include <QMessageBox>

#include <QtNetwork/QSslConfiguration>

namespace mdb {
    uint8_t m_debug = 0;

    MyDataBaseSession::MyDataBaseSession(QObject *parent) :
        QObject(parent)
    {
        // todo ...
        QString m_sslCertName = "ca.pem";

        if (!QSslSocket::supportsSsl()) {
            QMessageBox::warning(0,tr("Error"),
            "Missing SSL Instalation.");
            return;
        }

        QList<QSslCertificate> m_certList =
        QSslCertificate::fromPath(m_sslCertName,
        QSsl::Pem,QRegExp::WildcardUnix);

        if (m_certList.count() < 1) {
            QMessageBox::warning(0,tr("Error"),
            QString("No valid CA-Certificate found: %1").
            arg(m_sslCertName));
            return;
        }

        m_socket = new QSslSocket();
        if (!m_socket) {
            QMessageBox::warning(0,tr("Error"),
            "Creation of SSL-Socket failed.");
            return;
        }

        m_socket->addCaCertificates(m_sslCertName);

        QSslConfiguration m_sslConfig = m_socket->sslConfiguration();
        m_sslConfig.setProtocol (QSsl::SslV3);
        m_sslConfig.setSslOption(QSsl::SslOptionDisableServerNameIndication,true);

        m_socket->setSslConfiguration(m_sslConfig);

        QObject::connect(m_socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(socketStateChanged(QAbstractSocket::SocketState)));
        QObject::connect(m_socket, SIGNAL(encrypted()), this, SLOT(connection_encrypted()));

        QObject::connect(m_socket, SIGNAL(disconnected()), this, SLOT(connection_disconnected()));
        QObject::connect(m_socket, SIGNAL(encrypted()), this, SLOT(ready()));

        QObject::connect(m_socket, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(sslErrors(QList<QSslError>)));
        QObject::connect(m_socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    }

    MyDataBaseSession::~MyDataBaseSession()
    {
        m_socket->abort();
        m_socket->disconnectFromHost();

        delete m_socket;
        m_socket = nullptr;
    }

    void MyDataBaseSession::readyRead()
    {
        QByteArray array = m_socket->read( m_socket->bytesAvailable() );
        QString ast = QString::fromStdString(array.toStdString());
        QMessageBox::information(0,"Info","Secure Connection available.");
        QMessageBox::information(0,"info",ast);

        //...
    }

    int MyDataBaseSession::connect(QString host, uint16_t port)
    {
        if (!m_socket || m_error != 0) {
            QMessageBox::warning(0,tr("Error"),
            "Client SSL-Socket not initialized properly.");
            return m_error;
        }
        m_error = 0;

        m_socket->abort();
        m_socket->connectToHostEncrypted(host, port, "client",
            QIODevice::ReadWrite,
            QAbstractSocket::IPv4Protocol);

        if (!m_socket->waitForEncrypted()) {
            //QList<QSslError> errorList       = m_socket->sslErrors();
            //QAbstractSocket::SocketError err = m_socket->error();
            QString m_str;

            m_str  = m_socket->errorString() + ".";
            m_str += " Connection failed.";
            QMessageBox::warning(0,tr("Erro"),m_str);

            m_error = -10;
        }   return m_error;
    }

    void MyDataBaseSession::connection_encrypted   () { m_debug = 1; }
    void MyDataBaseSession::connection_disconnected() { m_debug = 1; }
    void MyDataBaseSession::ready                  () { m_debug = 1; }

    void MyDataBaseSession::sslErrors(QList<QSslError> sslErrors)
    {
        Q_UNUSED(sslErrors)
        m_debug = 1; // Do something (log...)
    }

    }   // namespace: mdb

    namespace mdb {
    MyDataBaseSession *
    MyDataProperties::getSession() const
    {
        if (m_debug == 1) {
            QMessageBox::warning(0,
                "Warning",
                "no session created.");
            return nullptr;
        }
        return m_session;
    }
    void MyDataProperties::setSession(MyDataBaseSession *s)
    {
        if ((m_debug == 1) && (s == nullptr)) {
            QMessageBox::warning(0,
                "Warning",
                "session is null."
            );
            m_session = nullptr;
            return;
        }   m_session = s;
    }

    void MyDataProperties::close()
    {

    }
}   // namespace: mdb
