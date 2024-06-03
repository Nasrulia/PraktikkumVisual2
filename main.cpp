#include "guipraktikum.h"

#include <QApplication>
#include <karyawan.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // formUtama w;
    // w.show();
    guiPraktikum g;
    g.show();

    // QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    // konekDB.setDatabaseName("dsn_penggajian");
    // konekDB.setUserName("root");
    // konekDB.setPassword("");

    // if(!konekDB.open()){
    //     qDebug()<<konekDB.lastError().text();
    //     return -1;
    // }


    // karyawan k;
    // k.setNIK("2210010620");
    // k.setNAMA("Nasrulia Khairunisa Istiqomah");
    // k.setALAMAT("Sudangi Andai");
    // k.setTELP("089530585553");
    // k.setGolongan("I");
    // k.setStatusNikah("Menikah");
    // k.setJumlahAnak(1);
    // k.setMasaKerja(3);
    // qDebug()<<"NIK "<<k.getNIK()<<"\n ";
    // qDebug()<<"NAMA "<<k.getNAMA()<<"\n ";
    // qDebug()<<"ALAMAT "<<k.getALAMAT()<<"\n ";
    // qDebug()<<"TELP "<<k.getTELP()<<"\n ";
    // qDebug()<<"GAJI POKOK "<<k.getTunjGolongan()<<"\n ";
    // qDebug()<<"TUNJ. STATUS "<<k.getTunjNikah()<<"\n ";
    // qDebug()<<"TUNJ. ANAK "<<k.getTunjAnak()<<"\n ";
    // qDebug()<<"TUNJ. MASA KERJA "<<k.getTunjMasaKerja()<<"\n ";
    // qDebug()<<"GAJI TOTAL "<<k.getGajiTotal()<<"\n ";
    return a.exec();
}
