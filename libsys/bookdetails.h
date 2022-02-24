#ifndef BOOKDETAILS_H
#define BOOKDETAILS_H

#include <QDialog>

namespace Ui {
class bookdetails;
}

class bookdetails : public QDialog
{
    Q_OBJECT

public:
    explicit bookdetails(QWidget *parent = nullptr);
    ~bookdetails();

private slots:
    void on_checkBox_stateChanged(int arg1);

private:
    Ui::bookdetails *ui;
};

#endif // BOOKDETAILS_H
