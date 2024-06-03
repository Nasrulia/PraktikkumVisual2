#ifndef FORMBARANG_H
#define FORMBARANG_H

#include <QWidget>
#include <barang.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

namespace Ui {
class FormBarang;
}

class FormBarang : public QWidget
{
    Q_OBJECT

public:
    explicit FormBarang(QWidget *parent = nullptr);
    ~FormBarang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormBarang *ui;
    barang uji;
    QSqlDatabase Koneksi;
};

#endif // FORMBARANG_H
