#include "addmod_users.h"
#include "ui_addmod_users.h"

addmod_users::addmod_users(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmod_users)
{
    ui->setupUi(this);
}

addmod_users::~addmod_users()
{
    delete ui;
}
