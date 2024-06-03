QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barang.cpp \
    formbarang.cpp \
    forminvd.cpp \
    forminvoice.cpp \
    formkaryawan.cpp \
    formkategori.cpp \
    formkota.cpp \
    formpelanggan.cpp \
    formsubkategory.cpp \
    gaji.cpp \
    guipraktikum.cpp \
    invd.cpp \
    invoice.cpp \
    karyawan.cpp \
    kategori.cpp \
    kota.cpp \
    main.cpp \
    pelanggan.cpp \
    subkategori.cpp

HEADERS += \
    barang.h \
    formbarang.h \
    forminvd.h \
    forminvoice.h \
    formkaryawan.h \
    formkategori.h \
    formkota.h \
    formpelanggan.h \
    formsubkategory.h \
    gaji.h \
    guipraktikum.h \
    invd.h \
    invoice.h \
    karyawan.h \
    kategori.h \
    kota.h \
    pelanggan.h \
    subkategori.h

FORMS += \
    formbarang.ui \
    forminvd.ui \
    forminvoice.ui \
    formkaryawan.ui \
    formkategori.ui \
    formkota.ui \
    formpelanggan.ui \
    formsubkategory.ui \
    guipraktikum.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
