#ifndef BARANG_H
#define BARANG_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class barang
{
public:
    barang();


private:
    QSqlDatabase koneksiDB;
};

#endif // BARANG_H
