#include "karyawan.h"


karyawan::karyawan() {
    // QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    // konekDB.setDatabaseName("dsn_penggajian");
    // konekDB.setUserName("root");
    // konekDB.setPassword("");

    // if(konekDB.open()){
    //     qDebug()<<"Database terkoneksi";
    // }else{
    //     qDebug()<<konekDB.lastError().text();
    // }
}

karyawan::karyawan(QString nik, QString golongan, QString status, int jumAnak, int masaKerja, QString nama, QString alamat, QString telp)
{
    this->nik = nik;
    this->setGolongan(golongan);
    this->setStatusNikah(status);
    this->setJumlahAnak(jumAnak);
    this->setMasaKerja(masaKerja);
    this->nama = nama;
    this->alamat = alamat;
    this->telp = telp;
}

void karyawan::setNIK(QString NIK)
{
    this->nik = NIK;
}

QString karyawan::getNIK()
{
    return this->nik;
}

void karyawan::setNAMA(QString NAMA)
{
    this->nama = NAMA;
}

QString karyawan::getNAMA()
{
    return this->nama;
}

void karyawan::setALAMAT(QString ALAMAT)
{
    this->alamat = ALAMAT;
}

QString karyawan::getALAMAT()
{
    return this->alamat;
}

void karyawan::setTELP(QString TELP)
{
    this->telp = TELP;
}

QString karyawan::getTELP()
{
    return this->telp;
}


