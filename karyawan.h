#ifndef KARYAWAN_H
#define KARYAWAN_H
#include <gaji.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class karyawan : public gaji
{
public:
    karyawan(); // constructor 1
    karyawan(QString nik, QString golongan,
             QString status, int jumAnak, int masaKerja, QString nama,
             QString alamat, QString telp); // constructor 2 (Overload Constructor)

    void setNIK(QString NIK);
    QString getNIK();

    void setNAMA(QString NAMA);
    QString getNAMA();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTELP(QString TELP);
    QString getTELP();

private:
    QString nik, nama, alamat, telp;
    QSqlDatabase koneksiDB;
};

#endif // KARYAWAN_H
