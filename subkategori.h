#ifndef SUBKATEGORI_H
#define SUBKATEGORI_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class subKategori
{
public:
    subKategori();
private:
    QSqlDatabase koneksiDB;
};

#endif // SUBKATEGORI_H
