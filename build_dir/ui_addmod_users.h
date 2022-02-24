/********************************************************************************
** Form generated from reading UI file 'addmod_users.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOD_USERS_H
#define UI_ADDMOD_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmod_users
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *addmod_users)
    {
        if (addmod_users->objectName().isEmpty())
            addmod_users->setObjectName(QString::fromUtf8("addmod_users"));
        addmod_users->resize(642, 513);
        scrollArea = new QScrollArea(addmod_users);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(90, 120, 451, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 269));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 431, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(addmod_users);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 411, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(addmod_users);

        QMetaObject::connectSlotsByName(addmod_users);
    } // setupUi

    void retranslateUi(QDialog *addmod_users)
    {
        addmod_users->setWindowTitle(QCoreApplication::translate("addmod_users", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addmod_users", "Add/Modify Users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmod_users: public Ui_addmod_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOD_USERS_H
