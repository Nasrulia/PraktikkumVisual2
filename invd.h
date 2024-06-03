#ifndef INVD_H
#define INVD_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
class invd
{
public:
    invd();

private:
    QSqlDatabase koneksiDB;
};

#endif // INVD_H
