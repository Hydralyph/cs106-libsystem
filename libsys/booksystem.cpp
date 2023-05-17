#include "booksystem.h"

booksystem::booksystem()
{

}

QString Book::GetTitle() { return title; }
QString Book::GetAuthor() { return author; }
QString Book::GetGenre1() { return genre1; }
QString Book::GetGenre2() { return genre2; }
QString Book::GetISBN() { return isbn; }
bool Book::GetIsAvailable() { return isAvailable; }

void Book::SetTitle(QString in)
{
    this->title = in;
}

void Book::SetAuthor(QString in)
{
    this->author = in;
}

void Book::SetGenre1(QString in)
{
    this->genre1 = in;
}

void Book::SetGenre2(QString in)
{
    this->genre2 = in;
}

void Book::SetISBN(QString in)
{
    this->isbn = in;
}

void Book::SetIsAvailable(bool in)
{
    this->isAvailable = in;
}
