QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    billingpart.cpp \
    cookscreen.cpp \
    dialogpart1.cpp \
    dialogpart2.cpp \
    dialogpart3.cpp \
    dialogpart4.cpp \
    dialogpart5.cpp \
    dialogpart6.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    billingpart.h \
    cookscreen.h \
    dialogpart1.h \
    dialogpart2.h \
    dialogpart3.h \
    dialogpart4.h \
    dialogpart5.h \
    dialogpart6.h \
    mainwindow.h

FORMS += \
    billingpart.ui \
    cookscreen.ui \
    dialogpart1.ui \
    dialogpart2.ui \
    dialogpart3.ui \
    dialogpart4.ui \
    dialogpart5.ui \
    dialogpart6.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    projectpart1.qrc
