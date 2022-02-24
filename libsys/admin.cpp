#include "admin.h"
#include "bookdetails.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_addmod_Books_clicked()
{
    bookdetails bdWindow;
    bdWindow.setModal(true);
    bdWindow.exec();
}

