#ifndef FORMSUBKATEGORY_H
#define FORMSUBKATEGORY_H

#include <QWidget>
#include <subkategori.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
class FormsubKategory;
}

class FormsubKategory : public QWidget
{
    Q_OBJECT

public:
    explicit FormsubKategory(QWidget *parent = nullptr);
    ~FormsubKategory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormsubKategory *ui;
    subKategori uji;
    QSqlDatabase Koneksi;
};

#endif // FORMSUBKATEGORY_H
