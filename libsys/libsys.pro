QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addmod_users.cpp \
    admin.cpp \
    bookdetails.cpp \
    booksystem.cpp \
    filesystem.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    useraccountsystem.cpp

HEADERS += \
    addmod_users.h \
    admin.h \
    bookdetails.h \
    booksystem.h \
    filesystem.h \
    login.h \
    mainwindow.h \
    useraccountsystem.h

FORMS += \
    addmod_users.ui \
    admin.ui \
    bookdetails.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

# LIBS += -lmylib \
