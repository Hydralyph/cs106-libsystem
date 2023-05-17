#include "bookdetails.h"
#include "ui_bookdetails.h"
#include <QDebug>
#include <QMessageBox>

bookdetails::bookdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookdetails)
{
    ui->setupUi(this);

}

bookdetails::~bookdetails()
{
    delete ui;
}

void bookdetails::on_checkBox_stateChanged(int arg1)
{
    QString genre1 = ui->comboBox->currentText();
    QString genre2 = ui->comboBox_2->currentText();


    if (ui->checkBox->isChecked()) {
        QMessageBox::warning(this,"IsAvailable Set.",
                             QString("The book will be marked as available.")
                             .arg(genre1,genre2));
    } else {

    }
}

