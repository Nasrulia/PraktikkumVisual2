#include "forminvd.h"
#include "ui_forminvd.h"

FormInvd::FormInvd(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormInvd)
{
    ui->setupUi(this);
}

FormInvd::~FormInvd()
{
    delete ui;
}

void FormInvd::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_invd(iddetail,nm_brng,satuan,harga,qty,jumlah,berat,jmlh_brt,idinvoice,id_brng)"
                "VALUE(:iddetail,:nm_brng,:satuan,:harga,:qty,:jumlah,:berat,:jmlh_brt,:idinvoice,:id_brng)");
    sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":qty",ui->qtyLineEdit->text().toInt());
    sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
    sql.bindValue(":berat",ui->beratLineEdit->text().toInt());
    sql.bindValue(":jmlh_brt",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormInvd::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_invd SET  nm_brng=:nm_brng, satuan=:satuan, harga=:harga,"
                "qty=:qty, jumlah=:jumlah, berat=:berat, jmlh_brt=:jmlh_brt, idinvoice=:idinvoice,id_brng=:id_brng WHERE iddetail=:iddetail");
    sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":qty",ui->qtyLineEdit->text().toInt());
    sql.bindValue(":jumlah",ui->jumlahLineEdit->text().toInt());
    sql.bindValue(":berat",ui->beratLineEdit->text().toInt());
    sql.bindValue(":jmlh_brt",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Diupdate";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void FormInvd::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_invd WHERE iddetail=:iddetail");
    sql.bindValue(":iddetail",ui->idDetailLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

