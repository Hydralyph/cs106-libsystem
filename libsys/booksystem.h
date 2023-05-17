#ifndef BOOKSYSTEM_H
#define BOOKSYSTEM_H

#include <QString>

class booksystem
{
public:
    booksystem();
};


class Book
{
private:
    QString title;
    QString author;
    QString genre1;
    QString genre2;
    QString isbn;
    bool isAvailable;

public:
    QString GetTitle();
    QString GetAuthor();
    QString GetGenre1();
    QString GetGenre2();
    QString GetISBN();
    bool GetIsAvailable();

    void SetTitle(QString);
    void SetAuthor(QString);
    void SetGenre1(QString);
    void SetGenre2(QString);
    void SetISBN(QString);
    void SetIsAvailable(bool);
};


#endif // BOOKSYSTEM_H
