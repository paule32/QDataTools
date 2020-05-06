# ------------------------------------------------------------------------------
# MIT License
#
# Copyright (c) 2020 Jens Kallup
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# ------------------------------------------------------------------------------
CONFIG   += release
TARGET    = $$qtLibraryTarget(paule32_VisualEditorCPP)
TEMPLATE  = lib

QT += widgets

TOPDIR      = $$PWD
UI_DIR      = $${TOPDIR}/.uic
MOC_DIR     = $${TOPDIR}/.moc
OBJECTS_DIR = $${TOPDIR}/.obj
RCC_DIR     = $${TOPDIR}/.res

DEFINES += BUILDTIME=\\\"$$system(date '+%H:%M:%S')\\\"
DEFINES += BUILDDATE=\\\"$$system(date '+%Y-%m-%d')\\\"

INCLUDEPATH += $${UI_DIR}

FORMS += \
    $$PWD/mycodeeditor.ui \
    $$PWD/keywordspopup.ui

HEADERS += \
    $$PWD/keywordspopup.h \
    $$PWD/mycodeeditor.h \
    $$PWD/mycodeeditorgutter.h \
    $$PWD/mycodeeditorhighlighter.h

SOURCES += \
    $$PWD/keywordspopup.cpp \
    $$PWD/mycodeeditor.cpp \
    $$PWD/mycodeeditorgutter.cpp \
    $$PWD/mycodeeditorhighlighter.cpp
