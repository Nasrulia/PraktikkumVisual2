#include "formkaryawan.h"
#include "ui_formkaryawan.h"

FormKaryawan::FormKaryawan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormKaryawan)
{
    ui->setupUi(this);

    karyawan uji;

    QSqlDatabase Koneksi = QSqlDatabase::addDatabase("QODBC");
    Koneksi.setDatabaseName("dsn_penggajian");
    Koneksi.setUserName("root");
    Koneksi.setPassword("");

    if(!Koneksi.open()){
        qDebug()<<Koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";
    }

}

FormKaryawan::~FormKaryawan()
{
    delete ui;
}

void FormKaryawan::on_pushButton_clicked()
{

    uji.setGolongan(ui->golonganComboBox->currentText());
    uji.setStatusNikah(ui->statusNikahComboBox->currentText());
    uji.setJumlahAnak(ui->jumlahAnakLineEdit->text().toInt());
    uji.setMasaKerja(ui->masaKerjaLineEdit->text().toInt());


    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO karyawan(nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                "VALUE(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }


}


void FormKaryawan::on_pushButton_2_clicked()
{

    uji.setGolongan(ui->golonganComboBox->currentText());
    uji.setStatusNikah(ui->statusNikahComboBox->currentText());
    uji.setJumlahAnak(ui->jumlahAnakLineEdit->text().toInt());
    uji.setMasaKerja(ui->masaKerjaLineEdit->text().toInt());

    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE karyawan SET nama=:nama, alamat=:alamat, telp=:telp,"
                "golongan=:golongan, status=:status, anak=:anak, masa=:masa, gaji=:gaji WHERE nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormKaryawan::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM karyawan WHERE nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

