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
TARGET      = $$qtLibraryTarget(paule32_DataTable)
TEMPLATE    = lib

QT += designer widgets

RESOURCES  += $$PWD/icons.qrc
LIBS       += -L$$(QTDIR)/Tools/QtCreator/lib/qtcreator/plugins -lCore -L.

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

INCLUDEPATH += \
    $${UI_DIR} \
    $${UI_DIR}/..

# include files from other project stuff ...
INCLUDEPATH += \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/Tools/QtCreator/dev/src/libs \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/Tools/QtCreator/dev/src/plugins \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/Tools/QtCreator/dev/src/plugins/coreplugin

HEADERS += \
    $$PWD/qdatatable.h \
    $$PWD/qdatatabledialog.h \
    $$PWD/qdatatableplugin.h \
    $$PWD/qdatatabletaskmenu.h \
    $$PWD/qdatatablewizard.h \
    $$PWD/qdatatoolscollection.h \
    $$PWD/qdatatimer.h \
    $$PWD/qdatatimerdialog.h \
    $$PWD/qdatatimerplugin.h \
    $$PWD/qdatatimertaskmenu.h \
    $$PWD/qdatatimerwizard.h \
    $$PWD/myspinbox.h \
    $$PWD/mytimerstringlist.h \
    $$PWD/keywordspopup.h \
    $$PWD/mycodeeditor.h \
    $$PWD/mycodeeditorhighlighter.h \
    $$PWD/myemaildialog.h \
    $$PWD/myemailplugin.h \
    $$PWD/myemailtaskmenu.h \
    $$PWD/myemailwidget.h \
    $$PWD/myemailwizard.h \
    $$PWD/myfacebookdialog.h \
    $$PWD/myfacebookplugin.h \
    $$PWD/myfacebooktaskmenu.h \
    $$PWD/myfacebookwidget.h \
    $$PWD/myfacebookwizard.h \
    $$PWD/mypaypalbuttondialog.h \
    $$PWD/mypaypalbuttonplugin.h \
    $$PWD/mypaypalbuttontaskmenu.h \
    $$PWD/mypaypalbuttonwidget.h \
    $$PWD/mypaypalbuttonwizard.h \
    qdatacore_connectbutton_dialog.h \
    qdatacore_connectbutton_plugin.h \
    qdatacore_connectbutton_taskmenu.h \
    qdatacore_editbutton_dialog.h \
    qdatacore_editbutton_plugin.h \
    qdatacore_editbutton_taskmenu.h

SOURCES += \
    $$PWD/qdatatable.cpp \
    $$PWD/qdatatabledialog.cpp \
    $$PWD/qdatatableplugin.cpp \
    $$PWD/qdatatabletaskmenu.cpp \
    $$PWD/qdatatablewizard.cpp \
    $$PWD/qdatatoolscollection.cpp \
    $$PWD/qdatatimer.cpp \
    $$PWD/qdatatimerdialog.cpp \
    $$PWD/qdatatimertaskmenu.cpp \
    $$PWD/qdatatimerwizard.cpp \
    $$PWD/myspinbox.cpp \
    $$PWD/mytimerstringlist.cpp \
    $$PWD/keywordspopup.cpp \
    $$PWD/mycodeeditor.cpp \
    $$PWD/mycodeeditorhighlighter.cpp \
    $$PWD/qdatatimerplugin.cpp \
    $$PWD/myemaildialog.cpp \
    $$PWD/myemailplugin.cpp \
    $$PWD/myemailtaskmenu.cpp \
    $$PWD/myemailwidget.cpp \
    $$PWD/myemailwizard.cpp \
    $$PWD/myfacebookdialog.cpp \
    $$PWD/myfacebookplugin.cpp \
    $$PWD/myfacebooktaskmenu.cpp \
    $$PWD/myfacebookwidget.cpp \
    $$PWD/myfacebookwizard.cpp \
    $$PWD/mypaypalbuttondialog.cpp \
    $$PWD/mypaypalbuttonplugin.cpp \
    $$PWD/mypaypalbuttontaskmenu.cpp \
    $$PWD/mypaypalbuttonwidget.cpp \
    $$PWD/mypaypalbuttonwizard.cpp \
    qdatacore_connectbutton_dialog.cpp \
    qdatacore_connectbutton_plugin.cpp \
    qdatacore_connectbutton_taskmenu_kopie.cpp \
    qdatacore_editbutton_dialog.cpp \
    qdatacore_editbutton_plugin.cpp \
    qdatacore_editbutton_taskmenu.cpp

FORMS += \
    $$PWD/qdatatablewizard.ui \
    $$PWD/qdatatimerwizard.ui \
    $$PWD/keywordspopup.ui \
    $$PWD/mycodeeditor.ui \
    $$PWD/myfacebookwizard.ui \
    $$PWD/myemailwizard.ui \
    $$PWD/mypaypalbuttonwizard.ui

FORMS += \
    qdatasqlwintemp.ui
