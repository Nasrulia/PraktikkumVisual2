#ifndef FORMKATEGORI_H
#define FORMKATEGORI_H

#include <QWidget>
#include <kategori.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
class Formkategori;
}

class Formkategori : public QWidget
{
    Q_OBJECT

public:
    explicit Formkategori(QWidget *parent = nullptr);
    ~Formkategori();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Formkategori *ui;
    kategori uji;
    QSqlDatabase Koneksi;
};

#endif // FORMKATEGORI_H
