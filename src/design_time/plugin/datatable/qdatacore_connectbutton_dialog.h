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
#ifndef QDATACORE_CONNECTBUTTON_DIALOG_H
#define QDATACORE_CONNECTBUTTON_DIALOG_H

#include <QString>
#include <QWidget>
#include <QLabel>
#include <QTableWidget>
#include <QMoveEvent>
#include <QResizeEvent>
#include <QPaintEvent>
#include <QCommandLinkButton>

class QDataCore_ConnectButton : public QWidget
{
    Q_OBJECT
    Q_CLASSINFO("Version","0.0.1")

    Q_PROPERTY(QString UserName READ UserName WRITE setUserName NOTIFY UserNameChanged)
    Q_PROPERTY(QString UserPass READ UserPass WRITE setUserPass NOTIFY UserPassChanged)

    Q_PROPERTY(QString DBHost   READ DBHost   WRITE setDBHost   NOTIFY DBHostChanged)
    Q_PROPERTY(QString DBName   READ DBName   WRITE setDBName   NOTIFY DBNameChanged)
    Q_PROPERTY(QString DBPort   READ DBPort   WRITE setDBPort   NOTIFY DBPortChanged)

public:
    QDataCore_ConnectButton(QWidget *parent = 0);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

    void setState(const QString &newState);
    QString state() const;

    void setUserName(QString value) { m_UserName = value; emit UserNameChanged(value); }
    void setUserPass(QString value) { m_UserPass = value; emit UserPassChanged(value); }

    void setDBHost(QString value) { m_DBHost = value; emit DBHostChanged(value); }
    void setDBName(QString value) { m_DBName = value; emit DBNameChanged(value); }
    void setDBPort(QString value) { m_DBPort = value; emit DBPortChanged(value); }

    QString UserName() const { return m_UserName; }
    QString UserPass() const { return m_UserPass; }

    QString DBHost() const { return m_DBHost; }
    QString DBName() const { return m_DBName; }
    QString DBPort() const { return m_DBPort; }

signals:
    void UserNameChanged(QString value);
    void UserPassChanged(QString value);

    void DBHostChanged(QString value);
    void DBNameChanged(QString value);
    void DBPortChanged(QString value);

private:
    QCommandLinkButton * _widget = nullptr;

    QString m_UserName;
    QString m_UserPass;

    QString m_DBHost;
    QString m_DBName;
    QString m_DBPort;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

};

#endif // QDATACORE_CONNECTBUTTON_DIALOG_H
