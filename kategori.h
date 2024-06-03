#ifndef KATEGORI_H
#define KATEGORI_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
class kategori
{
public:
    kategori();
private:
    QSqlDatabase koneksiDB;
};

#endif // KATEGORI_H
