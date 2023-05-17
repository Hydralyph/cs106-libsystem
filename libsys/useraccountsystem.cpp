#include "useraccountsystem.h"

UserAccountSystem::UserAccountSystem()
{
}

int User::GetAccessLevel() { return this->accessLevel; }

QString User::GetUsername() { return this->username; }
QString User::GetPassword() { return this->password; }
QString User::GetUID() { return this->uid; }
QString User::GetEmail() { return this->email; }
QString User::GetPhoneNum() { return this->phoneNum; }

void User::SetUsername(QString in) { this->username = in; }
void User::SetPassword(QString in) { this->password = in; }
void User::SetUID(QString in) { this->uid = in; }
void User::SetEmail(QString in) { this->email = in; }
void User::SetPhoneNum(QString in) { this->phoneNum = in; }


int Admin::GetAccessLevel() { return this->accessLevel; }
