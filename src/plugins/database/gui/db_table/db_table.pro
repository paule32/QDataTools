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
win32:SUPPORT = no      # we don't support windows 32-Bit
win64:SUPPORT = no      # we don't support windows 64-Bit
linux:SUPPORT = $$system(uname -s) # ...
!contains(SUPPORT,[lL]inux): error("We only support Linux version of this Project")
#
isEmpty(QTDIR): QTDIR = $$system(echo $QTDIR)
isEmpty(QTDIR): error("The Compilation for this Project need the QTDIR path.")

CONFIG     += plugin release
TARGET      = $$qtLibraryTarget(paule32_DBTable)
TEMPLATE    = lib

QT += designer widgets

RESOURCES  += $$PWD/icons.qrc
LIBS       += -L$$(QTDIR)/Tools/QtCreator/lib/Qt/plugins/designer
LIBS       += -L$$(QTDTR)/Tools/QtCreator/lib/qtcreator \
              -L$$(QTDIR)/Tools/QtCreator/lib/qtcreator/plugins -lCore

TOPDIR      = $$PWD
UI_DIR      = $${TOPDIR}/.uic
MOC_DIR     = $${TOPDIR}/.moc
OBJECTS_DIR = $${TOPDIR}/.obj
RCC_DIR     = $${TOPDIR}/.res

DESTDIR     = $$(QTDIR)/Tools/QtCreator/lib/Qt/plugins/designer

DEFINES += BUILDTIME=\\\"$$system(date '+%H:%M:%S')\\\"
DEFINES += BUILDDATE=\\\"$$system(date '+%Y-%m-%d')\\\"

target.path  = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

INCLUDEPATH += \
    $$(QTDIR)/Tools/QtCreator/src/libs \
    $$(QTDIR)/Tools/QtCreator/src/libs/utils \
    $$(QTDIR)/Tools/QtCreator/src/plugins \
    $$(QTDIR)/Tools/QtCreator/src/plugins/actionmanager \
    $$(QTDIR)/Tools/QtCreator/src/plugins/editormanager \
    $${UI_DIR} \
    $${UI_DIR}/.. \
    $$PWD/../db_connect \
    $$PWD/../db_edit \
    $$PWD/../../../timer

HEADERS += \
    $$PWD/qdatatable.h \
    $$PWD/qdatatabledialog.h \
    $$PWD/qdatatableplugin.h \
    $$PWD/qdatatabletaskmenu.h \
    $$PWD/qdatatablewizard.h \
    $$PWD/qdatatable_collection.h

SOURCES += \
    $$PWD/qdatatable.cpp \
    $$PWD/qdatatabledialog.cpp \
    $$PWD/qdatatableplugin.cpp \
    $$PWD/qdatatabletaskmenu.cpp \
    $$PWD/qdatatablewizard.cpp \
    $$PWD/qdatatable_collection.cpp

FORMS += \
    $$PWD/qdatatablewizard.ui

