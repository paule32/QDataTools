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

DEFINES    += LINUXSQLTOOL_LIBRARY

CONFIG     += qtplugin debug
TARGET      = $$qtLibraryTarget(paule32_LinuxSQLTool)
TEMPLATE    = lib

QT += designer widgets network

RESOURCES  += $$PWD/icons.qrc
LIBS       += -L$$(QTDIR)/Tools/QtCreator/lib/qtcreator/plugins -lCore -L.

TOPDIR      = $$PWD
UI_DIR      = $${TOPDIR}/.uic
MOC_DIR     = $${TOPDIR}/.moc
OBJECTS_DIR = $${TOPDIR}/.obj
RCC_DIR     = $${TOPDIR}/.res

DESTDIR     = $$(QTDIR)/Tools/QtCreator/lib/Qt/plugins/designer
LIBS       += -L$$(QTDIR)/Tools/QtCreator/lib/qtcreator/plugins -lCore -L.

DEFINES += BUILDTIME=\\\"$$system(date '+%H:%M:%S')\\\"
DEFINES += BUILDDATE=\\\"$$system(date '+%Y-%m-%d')\\\"

target.path  = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

INCLUDEPATH += \
    $${UI_DIR} \
    $${UI_DIR}/..

SOURCES += \
    $$PWD/scenewidgetitem.cpp \
    $$PWD/sqltool.cpp \
    $$PWD/sqltool_mode.cpp

HEADERS += \
    $$PWD/scenewidgetitem.h \
    $$PWD/sqltool.h \
    $$PWD/sqltool_global.h \
    $$PWD/sqltool_constants.h \
    $$PWD/sqltool_mode.h \
    $$PWD/sqltool_widget.h

FORMS += \
    $$PWD/sqltool_mode.ui

DISTFILES += \
    $$PWD/LICENSE \
    $$PWD/README.md \
    $$PWD/sqltool.json \
    $$PWD/sqltool.json.in


isEmpty(IDE_SOURCE_TREE): IDE_SOURCE_TREE = $$(QTC_SOURCE)
isEmpty(IDE_SOURCE_TREE): IDE_SOURCE_TREE = $$system(echo $QTDIR)/Tools/QtCreator

isEmpty(IDE_BUILD_TREE): IDE_BUILD_TREE = $$(QTC_BUILD)
isEmpty(IDE_BUILD_TREE): IDE_BUILD_TREE = $$system(echo $QTDIR)/Tools/QtCreator

QTC_PLUGIN_NAME = paule32_LinuxSQLTool
QTC_LIB_DEPENDS += \
    extensionsystem

QTC_PLUGIN_DEPENDS += \
    coreplugin

QTC_PLUGIN_RECOMMENDS += \
    # optional plugin dependencies. nothing here at this time

include($$IDE_SOURCE_TREE/src/qtcreatorplugin.pri)
