#ifndef USERACCOUNTSYSTEM_H
#define USERACCOUNTSYSTEM_H

#include <QString>


class UserAccountSystem
{
public:
    UserAccountSystem();
};

class Account
{
public:
    virtual int GetAccessLevel() = 0;
    virtual QString GetUsername() = 0;
    virtual QString GetPassword() = 0;
    virtual void SetUsername(QString) = 0;
    virtual void SetPassword(QString) = 0;

protected:
    QString username;
    QString password;
};

/// \brief The User class, containsUser all data of users loaded into it and inherits from
/// Account for generic data like username and password

class User : private Account
{
private:
    const int accessLevel = 1;
    QString uid;
    QString email;
    QString phoneNum;

public:
    int GetAccessLevel();
    QString GetUsername();
    QString GetPassword();
    QString GetUID();
    QString GetEmail();
    QString GetPhoneNum();
    void SetUsername(QString);
    void SetPassword(QString);
    void SetUID(QString);
    void SetEmail(QString);
    void SetPhoneNum(QString);
};

class Admin : private Account
{
private:
    const int accessLevel = 2;

public:
    int GetAccessLevel();

};

#endif // USERACCOUNTSYSTEM_H
