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

#include <QMessageBox>
#include <QTextBrowser>
#include "lineedit.h"
#include "myssltoolmode.h"

using namespace LinuxSSLTool::Internal;

MyLineSSLEdit::MyLineSSLEdit(QWidget * parent)
    : QLineEdit(parent) {
    setMouseTracking(true);
    setStyleSheet(
        ":hover {background-color: qlineargradient(spread:pad, "
        "x1:1, y1:0.721591, x2:1, y2:0, stop:0 rgba(0, 255, 0, "
        "237), stop:1 rgba(255, 255, 255, 255));}");
}

void MyLineSSLEdit::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event)

    if (Tag() == 1) {
        ssl_edit_vector[0].m_mode->getTextBrowser()->document()->setHtml(
        "<p><span style='color:rgb(0,200,0);'><b><i>Path for saving CA-Root structure..</i></b></span></p>"
        "<p>Here, you can specified the path where the CA root, and server certificates will be stored.</p>"
        "<p>You can copy the files at later time for your needs.</p>");
    }
    else if (Tag() == 2) {
        ssl_edit_vector[0].m_mode->getTextBrowser()->document()->setHtml(
        "<p><span style='color:rgb(0,200,0);'><b><i>Domain for CA-Root registration..</i></b></span></p>");
    }
    else if (Tag() == 3) {
        ssl_edit_vector[0].m_mode->getTextBrowser()->document()->setHtml(
        "<p><span style='color:rgb(0,200,0);'><b><i>The Owner of the CA-Root.</i></b></span></p>"
        "<p>Mostly this is the Company CEO or a Administrative Person</p>");
    }
    else {
        ssl_edit_vector[0].m_mode->getTextBrowser()->document()->clear();
    }
}

void MyLineSSLEdit::focusOutEvent(QFocusEvent *event)
{
    Q_UNUSED(event)
    ssl_edit_vector[0].m_mode->getTextBrowser()->document()->clear();
}
