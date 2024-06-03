#ifndef KOTA_H
#define KOTA_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
class kota
{
public:
    kota();
private:
    QSqlDatabase koneksiDB;
};

#endif // KOTA_H
