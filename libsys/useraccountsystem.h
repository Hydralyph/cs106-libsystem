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
};

class User : private Account
{
private:
    const int accessLevel = 1;
    QString UserID;
    QString username;
    QString password;


public:
    int GetAccessLevel() { return accessLevel; }
    QString GetUsername() { return username; }
    bool Authenticate();
    void SetUsername(QString);
    void SetPassword(QString);
    void SetUserID(QString);
};

class Admin : private Account
{
private:
    const int accessLevel = 2;
    QString username;
    QString password;

public:
    int GetAccessLevel() { return accessLevel; }
    QString GetUsername() { return username; }
    bool Authenticate();
    void SetUsername(QString);
    void SetPassword(QString);
    void SetUserID(QString);
};

#endif // USERACCOUNTSYSTEM_H
