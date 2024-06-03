#ifndef FORMINVD_H
#define FORMINVD_H

#include <QWidget>
#include <invd.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
class FormInvd;
}

class FormInvd : public QWidget
{
    Q_OBJECT

public:
    explicit FormInvd(QWidget *parent = nullptr);
    ~FormInvd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FormInvd *ui;
    invd uji;
    QSqlDatabase Koneksi;
};

#endif // FORMINVD_H
