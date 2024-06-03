#ifndef FORMINVOICE_H
#define FORMINVOICE_H

#include <QWidget>
#include <invoice.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

namespace Ui {
class Forminvoice;
}

class Forminvoice : public QWidget
{
    Q_OBJECT

public:
    explicit Forminvoice(QWidget *parent = nullptr);
    ~Forminvoice();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Forminvoice *ui;
    invoice uji;
    QSqlDatabase Koneksi;
};

#endif // FORMINVOICE_H
