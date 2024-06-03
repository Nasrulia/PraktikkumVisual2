#ifndef FORMSUBKATEGORI_H
#define FORMSUBKATEGORI_H

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QWidget>
#include <QtSql>
#include <subkategori.h>

namespace Ui {
class Formsubkategori;
}

class Formsubkategori : public QWidget
{
    Q_OBJECT

public:
    explicit Formsubkategori(QWidget *parent = nullptr);
    ~Formsubkategori();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Formsubkategori *ui;
    subKategori uji;
    QSqlDatabase Koneksi;
};

#endif // FORMSUBKATEGORI_H
