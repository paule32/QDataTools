TARGET = qsqlmysql

INCLUDEPATH += \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/include \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/include/QtCore/private \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/include/QtCore \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/include/QtSql/private \
    /home/paule32/Projects/Qt/5.14.2/gcc_64/include/QtSql

HEADERS += $$PWD/qsql_mysql_p.h
SOURCES += $$PWD/qsql_mysql.cpp $$PWD/main.cpp

#QMAKE_USE += mysql

OTHER_FILES += mysql.json
load(qt_build_config)
PLUGIN_CLASS_NAME = QMYSQLDriverPlugin
include($$PWD/../qsqldriverbase.pri)

INCLUDEPATH += /usr/include/mysql
LIBS        += -L/x86_64-linux-gnu -lmysqlclient
