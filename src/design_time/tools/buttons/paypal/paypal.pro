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
CONFIG     += plugin release
TARGET      = $$qtLibraryTarget(paule32_ButtonPayPal)
TEMPLATE    = lib

QT += designer widgets

RESOURCES  += $$PWD/icons.qrc
LIBS       += -L.

TOPDIR      = $$PWD
UI_DIR      = $${TOPDIR}/.uic
MOC_DIR     = $${TOPDIR}/.moc
OBJECTS_DIR = $${TOPDIR}/.obj
RCC_DIR     = $${TOPDIR}/.res
DESTDIR     = $${TOPDIR}/.lib

DEFINES += BUILDTIME=\\\"$$system(date '+%H:%M:%S')\\\"
DEFINES += BUILDDATE=\\\"$$system(date '+%Y-%m-%d')\\\"

target.path  = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

# include files from other project stuff ...
INCLUDEPATH += \
    $${TOPDIR}/.uic \
    $${TOPDIR}

FORMS += \
    $$PWD/mypaypalbuttonwizard.ui

HEADERS += \
    &&PWD/mypaypalbuttoncollection.h \
    $$PWD/mypaypalbuttondialog.h \
    $$PWD/mypaypalbuttonplugin.h \
    $$PWD/mypaypalbuttontaskmenu.h \
    $$PWD/mypaypalbuttonwizard.h \
    mypaypalcollection.h

SOURCES += \
    $$PWD/mypaypalbuttoncollection.cpp \
    $$PWD/mypaypalbuttondialog.cpp \
    $$PWD/mypaypalbuttonplugin.cpp \
    $$PWD/mypaypalbuttontaskmenu.cpp \
    $$PWD/mypaypalbuttonwizard.cpp
