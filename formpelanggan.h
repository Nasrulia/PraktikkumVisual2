#ifndef FORMPELANGGAN_H
#define FORMPELANGGAN_H

#include <QWidget>
#include <pelanggan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
class Formpelanggan;
}

class Formpelanggan : public QWidget
{
    Q_OBJECT

public:
    explicit Formpelanggan(QWidget *parent = nullptr);
    ~Formpelanggan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formpelanggan *ui;
    pelanggan uji;
    QSqlDatabase Koneksi;
};

#endif // FORMPELANGGAN_H
