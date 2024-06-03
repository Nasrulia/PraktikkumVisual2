#ifndef INVOICE_H
#define INVOICE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class invoice
{
public:
    invoice();

private:
    QSqlDatabase koneksiDB;
};

#endif // INVOICE_H
