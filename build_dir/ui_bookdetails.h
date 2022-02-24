/********************************************************************************
** Form generated from reading UI file 'bookdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAILS_H
#define UI_BOOKDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookdetails
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *checkBox;
    QFrame *frame;
    QLabel *label_5;

    void setupUi(QDialog *bookdetails)
    {
        if (bookdetails->objectName().isEmpty())
            bookdetails->setObjectName(QString::fromUtf8("bookdetails"));
        bookdetails->resize(732, 514);
        gridLayoutWidget = new QWidget(bookdetails);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(170, 110, 391, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 5, 0, 1, 1);

        frame = new QFrame(bookdetails);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, -21, 751, 101));
        frame->setStyleSheet(QString::fromUtf8("background-color: #373737;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 40, 291, 41));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));

        retranslateUi(bookdetails);

        QMetaObject::connectSlotsByName(bookdetails);
    } // setupUi

    void retranslateUi(QDialog *bookdetails)
    {
        bookdetails->setWindowTitle(QCoreApplication::translate("bookdetails", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("bookdetails", "Genre 2", nullptr));
        label_2->setText(QCoreApplication::translate("bookdetails", "Author", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("bookdetails", "Action", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("bookdetails", "Adventure", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("bookdetails", "Comedy", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("bookdetails", "Horror", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("bookdetails", "Mystery", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("bookdetails", "Non-fiction", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("bookdetails", "Romance", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("bookdetails", "Science Fiction", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("bookdetails", "None", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("bookdetails", "Action", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("bookdetails", "Adventure", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("bookdetails", "Comedy", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("bookdetails", "Horror", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("bookdetails", "Mystery", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("bookdetails", "Non-fiction", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("bookdetails", "Romance", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("bookdetails", "Science Fiction", nullptr));

        label_3->setText(QCoreApplication::translate("bookdetails", "Genre 1", nullptr));
        label->setText(QCoreApplication::translate("bookdetails", "Title", nullptr));
        checkBox->setText(QCoreApplication::translate("bookdetails", "Available?", nullptr));
        label_5->setText(QCoreApplication::translate("bookdetails", "Modify Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookdetails: public Ui_bookdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
