CONFIG   += plugin release
TARGET   = $$qtLibraryTarget(qdatatoolscollectionplugin)
TEMPLATE = lib

QT += widgets

HEADERS += \
    qdatatable.h \
    \
    $$PWD/qdatatabledialog.h \
    $$PWD/qdatatabletaskmenu.h \
    $$PWD/qdatatablewizard.h \
    \
    qdatatimer.h \
    $$PWD/qdatatimerdialog.h \
    $$PWD/qdatatimertaskmenu.h \
    \
    qdatatimerplugin.h \
    qdatatableplugin.h \
    qdatasqlqueryplugin.h \
    qdatatoolscollection.h

SOURCES += \
    qdatatable.cpp \
    $$PWD/qdatatabledialog.cpp \
    $$PWD/qdatatabletaskmenu.cpp \
    $$PWD/qdatatablewizard.cpp \
    \
    qdatatimer.cpp \
    $$PWD/qdatatimerdialog.cpp \
    $$PWD/qdatatimertaskmenu.cpp \
    \
    qdatatimerplugin.cpp \
    qdatatableplugin.cpp \
    qdatasqlqueryplugin.cpp \
    qdatatoolscollection.cpp

FORMS += \
    $$PWD/qdatatablewizard.ui

RESOURCES += icons.qrc
LIBS      += -L.

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

