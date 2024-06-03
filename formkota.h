#ifndef FORMKOTA_H
#define FORMKOTA_H

#include <QWidget>
#include <kota.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
class Formkota;
}

class Formkota : public QWidget
{
    Q_OBJECT

public:
    explicit Formkota(QWidget *parent = nullptr);
    ~Formkota();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formkota *ui;
    kota uji;
    QSqlDatabase Koneksi;
};

#endif // FORMKOTA_H
