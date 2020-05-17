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
#ifndef MYDATABASE_H
#define MYDATABASE_H
#pragma once

#include <QObject>
#include <QString>
#include <QList>

#include <QtNetwork/QSslSocket>
#include <QtNetwork/QSslError>

// ns: mdb - my database
namespace mdb
{
    extern uint8_t m_debug; // debug ?

    // driver type's for the data base system ...
    enum dbDriver {
        mysql = 1
    };

    // supported types
    enum dbType {
        dbaseUnknown = 0,
        dbaseTable   = 1,
        dbaseSQL     = 2
    };

    // ssl, cert ...
    enum dbFlag {
        dbaseNoFlag   = 0,
        dbaseWithCert = 1
    };

    // ssl - session
    class MyDataBaseSession: public QObject {
        Q_OBJECT
    public:
        explicit MyDataBaseSession(QObject * parent = nullptr);
        ~MyDataBaseSession();

        int  connect(QString host, uint16_t port);
        void close();

        void     setDriver(dbDriver drv) { this->m_driver =  drv; }
        dbDriver getDriver()       const { return this->m_driver; }

        void setPort(uint16_t sp) { this->m_port = sp; }
        void setHost(QString  sh) { this->m_host = sh; }

        uint16_t getPort() const { return this->m_port; }
        QString  getHost() const { return this->m_host; }

    protected:
        QSslSocket * m_socket;  // client socket
        uint16_t     m_error;   // ssl error #

        dbDriver     m_driver;
        QString      m_name;

        QString      m_host;
        uint16_t     m_port;

    private slots:
        void sslErrors(QList<QSslError> sslErrors);
        void readyRead();
        void ready();
        void connection_disconnected();
        void connection_encrypted();
    };

    // for sub-class ...
    class MyDataProperties {
    public:
        void    setName(QString name) { this->m_name = name; }
        QString getName()       const { return this->m_name; }

        void setSession(MyDataBaseSession * s);
        MyDataBaseSession * getSession() const;

        bool     open(MyDataBaseSession * sess);
        void     close();

    protected:
        QString             m_name;
        MyDataBaseSession * m_session = nullptr;
    };

    // sub class: table ...
    class  MyDataTable:
    public MyDataProperties  ,
    public MyDataBaseSession {
    public:
    };

    // sub class: sql ...
    class  MyDataSQL:
    public MyDataProperties  ,
    public MyDataBaseSession {
    public:
    };
extern void testung();
}       // mdb namespace
#endif  // MYDATABASE_H
