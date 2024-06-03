#ifndef PELANGGAN_H
#define PELANGGAN_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class pelanggan
{
public:
    pelanggan();
private:
    QSqlDatabase koneksiDB;
};

#endif // PELANGGAN_H
