#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filesystem.h"
#include "login.h"
#include "useraccountsystem.h"
#include "booksystem.h"
#include <QDebug>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    FS::SetFilenameOnStartup();
    ui->setupUi(this);


    this->setFixedSize(this->width(), this->height());

    QScrollArea *scrollField = ui->scrollArea;
    QVBoxLayout *scrollAlign = new QVBoxLayout();
    QFrame *inner = new QFrame();
    inner->setLayout(scrollAlign);
    scrollField->setWidget(inner);


//    scrollAlign->addLayout(ui->Entry_1);
//    scrollAlign->addLayout(ui->Entry_2);


    // BECOMES A NULL PIXMAP
//    QPixmap img;
//    img.load(QString(QCoreApplication::applicationDirPath() + bookData[7]));
//    qDebug() << QCoreApplication::applicationDirPath();

    QVector<Book*> bookVec;

for (int i = 0; i < 10; i++) {
    QGridLayout *Template = new QGridLayout();
    QLabel *Image = new QLabel();
    QLabel *Title = new QLabel();
    QLabel *Author = new QLabel();
    QLabel *ISBN = new QLabel();
    QLabel *Desc = new QLabel();
    QFrame *line = new QFrame();


    Book *book = new Book();
        book->SetTitle("Title");
        book->SetAuthor("Author");
        book->SetISBN("1222343");
        book->SetGenre1("Horror");
        book->SetGenre2("Mystery");
        book->SetIsAvailable(true);
        bookVec.push_back(book);


    Title->setText("Title");
    Author->setText("Author");
    ISBN->setText("ISBN");

    Desc->setText("lol");

    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    Template->addWidget(Image,0,0);
    Template->addWidget(Title,0,1);
    Template->addWidget(Author,1,1);
    Template->addWidget(ISBN, 2,1);
    Template->addWidget(Desc,3,1);
    Template->addWidget(line, 4,1);
    scrollAlign->addLayout(Template);


};

User *user = new User();

qDebug() << user->GetAccessLevel();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_loginbutton_clicked()
{

        Login loginWindow(this);
        loginWindow.setModal(true);
        loginWindow.exec();

 }


