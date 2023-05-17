#include "login.h"
#include "ui_login.h"
#include "admin.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

Login::~Login()
{
    delete ui;
}

void Login::on_login_clicked()
{
    QString username = ui->userField->text();
    QString password = ui->passField->text();

    if (username == "Test" && password == "Test") {
        int nomValue = true;
        // emit login_button(log);
        // qDebug() << log;
        QMessageBox::information(this,"Login successful.","Logged in successfully.");
        this->close();
    }
    else if (username == "Admin" && password == "Admin") {
        QMessageBox::information(this,"Login successful.","Logged in successfully.");
        this->close();
        admin adminWindow;
        adminWindow.setModal(true);
        adminWindow.exec();

    } else {
        QMessageBox::warning(this,"Login unsuccessful.","Username and password are incorrect.");
    }

}

