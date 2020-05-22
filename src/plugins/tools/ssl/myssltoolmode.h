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
#ifndef MYSSLTOOLMODE_H
#define MYSSLTOOLMODE_H

#include <QWidget>
#include <QTextBrowser>
#include <QLineEdit>
#include <QTreeWidget>
#include <QTreeWidgetItem>

#include <QStringList>

#include "lineedit.h"
#include "ui_myssltoolmode.h"

//namespace Ui {
//class Ui_MySSLToolMode;
//}

namespace LinuxSSLTool {
namespace Internal
{
    class MySSLToolMode : public QWidget
    {
        Q_OBJECT
    public:
        explicit MySSLToolMode(QWidget *parent = nullptr);
        ~MySSLToolMode();

        bool write_cert(QString pro_str);
        void msgbox(QString msg);

        QString openPath();
        void pathEditTextChanged(const QString &arg1, QLineEdit * pathEdit);

        static void setMyPathInfo();

        Ui_MySSLToolMode * getUI() { return ui; }
        QTextBrowser     * getTextBrowser() { return getUI()->textBrowser; }

    private slots:
        void on_addNewCA_clicked();
        void on_pathEdit_textChanged(const QString &arg1);
        void on_openPath1_clicked();
        void on_openPath2_clicked();
        void on_openPath3_clicked();
        void on_openPath4_clicked();
        void on_openPath5_clicked();

        void on_serverPathEdit_textChanged(const QString &arg1);
        void on_pcPathEdit_textChanged(const QString &arg1);
        void on_appPathEdit_textChanged(const QString &arg1);
        void on_humPathEdit_textChanged(const QString &arg1);

    private:
        Ui_MySSLToolMode *ui;
    };

    struct
        my_ssl_edit_struct {
        my_ssl_edit_struct (
            int             p_group,
            MyLineSSLEdit * p_edit,
            MySSLToolMode * p_mode)
            : m_group(p_group)
            , m_edit (p_edit )
            , m_mode (p_mode ) { }
        int             m_group  ;
        MyLineSSLEdit * m_edit   ;
        MySSLToolMode * m_mode   ;
    };
    extern std::vector<my_ssl_edit_struct> ssl_edit_vector;

}   // namespace: Internal
}   // namespace: LinuxSSLTool

#endif // MYSSLTOOLMODE_H
