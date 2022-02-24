#ifndef ADDMOD_USERS_H
#define ADDMOD_USERS_H

#include <QDialog>

namespace Ui {
class addmod_users;
}

class addmod_users : public QDialog
{
    Q_OBJECT

public:
    explicit addmod_users(QWidget *parent = nullptr);
    ~addmod_users();

private:
    Ui::addmod_users *ui;
};

#endif // ADDMOD_USERS_H
