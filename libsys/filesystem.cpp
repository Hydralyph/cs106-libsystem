// Code Author: Jamie Adaway


#include "filesystem.h"

FS::Filesystem()
{
};

QFile Filesystem::catalogueFile;
QFile Filesystem::userFile;
QFile Filesystem::userCheckedOutFile;
QFile Filesystem::userReservedFile;



// ====== GENERAL FS FUNCTIONS ======
void FS::SetFilenameOnStartup()
{
    QString appDir = QCoreApplication::applicationDirPath();
    FS::catalogueFile.setFileName(appDir + "/res/libsys-cataloguedata.csv");
    FS::userFile.setFileName(appDir + "/res/libsys-userdata.csv");
    FS::userCheckedOutFile.setFileName(appDir + "/res/libsys-usercheckedoutdata.csv");
    FS::userReservedFile.setFileName(appDir + "/res/libsys-userreserveddata.csv");
}

QVector<Book*> FS::loadCatalogueData()
{
    QVector<Book*> temp;

    FS::catalogueFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QStringList splitList;
    QTextStream instream(&FS::catalogueFile);

    while(!instream.atEnd())
    {
        QString lineIn = instream.readLine();
        splitList.append(lineIn.split(",,"));
    }
    FS::catalogueFile.close();

    for(int i = 0; i < splitList.length(); i += 6)
    {
        Book* book = new Book();
        book->SetTitle(splitList[i]);
        book->SetAuthor(splitList[i + 1]);
        book->SetGenre1(splitList[i + 2]);
        book->SetGenre2(splitList[i + 3]);
        book->SetISBN(splitList[i + 4]);
        book->SetIsAvailable(splitList[i + 5].toInt());
    }

    return temp;
}

QStringList FS::loadUserData()
{
    userFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QStringList splitList;
    QTextStream instream(&userFile);

    while(!instream.atEnd())
    {
        QString lineIn = userFile.readLine();
        splitList.append(lineIn.split(",,"));
    }
    userFile.close();
    return splitList;
}

QStringList FS::loadUserCheckedOutData()
{
    userCheckedOutFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QStringList splitList;
    QTextStream instream(&userCheckedOutFile);

    while(!instream.atEnd())
    {
        QString lineIn = userCheckedOutFile.readLine();
        splitList.append(lineIn.split(",,"));
    }
    userCheckedOutFile.close();
    return splitList;
}

QStringList FS::loadUserReservedData()
{
    userReservedFile.open(QIODevice::ReadOnly);
    QStringList splitList;
    QTextStream instream(&userReservedFile);

    while(!instream.atEnd())
    {
        QString lineIn = userReservedFile.readLine();
        splitList.append(lineIn.split(",,"));
    }

    userReservedFile.close();
    return splitList;
}
// ==================================

// ======= USER FS FUNCTIONS ========

/* USER STORAGE DATA STRUCTURE
 * USER_ID, USER_NAME, USER_PASSWORD, USER_EMAIL, USER_PHONENUMBER, USER_PROFILEIMG, USER_ADMINFLAG
 * Each of these will be seperated by double commas ",," to allow for compatability with the catalogue storage */

void FS::AddUser(QString user_ID, QString user_Name, QString user_Password, QString user_Email, QString user_PhoneNum, QString user_AdminFlag)
{
    if(userFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&userFile);
        // NOTE: NEED TO RANDOMISE USERID
        out  << "\n" << user_ID << ",," << user_Name << ",," << user_Password << ",," << user_Email << ",," << user_PhoneNum << ",," << user_AdminFlag;
    }
    else
    {
        QMessageBox::warning(NULL, "FS ERROR: Failed to open User File. Please try again later.", userFile.errorString());
    }

    userFile.close();
}

void FS::ModifyUser(QStringList userData, QString userID)
{
    if(userData.contains(userID)) // Check for the userID
    {
        for(int i = 0; i < userData.length(); i += 6) // i + 7 should always equate to the User_ID field
        {
            if(userData[i] == userID)
            {
                // add mod fields example
                /* userData[i + 1] = ui->FirstName etc.
                 */
            }
        }

        if(userFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
        {
            QTextStream out(&userFile);
            // ADD OUTPUT OF USERDATA
            for(int i = 0; i < userData.length(); i += 6)
            {
                out << "\n" << userData[i] << ",," << userData[i + 1] << ",," << userData[i + 2] << ",," << userData[i + 3] << ",," << userData[i + 4] << ",," << userData[i + 5];
            }
        }
        else // If user file cannot be found show a message to warn the admin
        {
            QMessageBox::warning(NULL, "FS ERROR: Failed to open User File. Please try again later.", userFile.errorString());
        }
    }
    else // If userID cannot be found show a message to warn the admin
    {
        QMessageBox::information(NULL, "FS ERROR: UserID not found in User File. Try again later.", QString("User ID not found: " + userID));
    }

    userFile.close();
}

void FS::DeleteUser(QStringList userData, QString userID)
{
    if(userData.contains(userID))
    {
        for(int i = 0; i < userData.length(); i += 6)
        {
            if(userData[i] == userID)
            {
                // Add Deletion fields EXAMPLE
                /* userData[i].remove(0, userData[i].length());
                 * userData[i + 1].remove(0, userData[i + 1].length());
                 * etc etc.
                 */
            }
        }

        if(userFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
        {
            QTextStream out(&userFile);
            // ADD OUTPUT OF USERDATA
            for(int i = 0; i < userData.length(); i += 7)
            {
                out << userData[i] << ",," << userData[i + 1] << ",," << userData[i + 2] << ",," << userData[i + 3] << ",," << userData[i + 4] << ",," << userData[i + 5] << ",," <<
                       userData[i + 6] << "\n";
            }
        }
        else // If user file cannot be found show a message to warn the admin
        {
            QMessageBox::warning(NULL, "FS ERROR: Failed to open User File. Please try again later.", userFile.errorString());
        }
    }
    else
    {
        QMessageBox::information(NULL, "FS ERROR: UserID not found in User File. Try again later.", QString("User ID not found: " + userID));
    }
}
// ==================================

// ======= BOOK FS FUNCTIONS ========

/* BOOK STORAGE DATA STRUCTURE
 * BOOK_ID, BOOK_TITLE, BOOK_AUTHOR, BOOK_ISBN, BOOK_GENRE1, BOOK_GENRE2, BOOK_IMG
 * Each of these will be seperated by double commas ",," to allow for a description of each book to include a comma */

void FS::CheckoutBook(QString book_ID, QString book_Title, QString user_ID, QString user_FirstName, QString user_LastName, QString dueDate)
{
    if(userCheckedOutFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&userCheckedOutFile);
        out << "\n" << book_ID << ",," << book_Title << ",," << user_ID << ",," << user_FirstName << ",," << user_LastName << ",," << dueDate;
    }
    else // If checkedout file cannot be found show a message to warn the admin
    {
        QMessageBox::warning(NULL, "FS ERROR: Failed to open CheckedOut File. Please try again later.", userCheckedOutFile.errorString());
    }

    userCheckedOutFile.close();
}

void FS::ReserveBook(QString book_ID, QString book_Title, QString user_ID, QString user_FirstName, QString user_LastName, QString dueDate, QString reserveDate)
{
    if(userReservedFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&userReservedFile);
        out << "\n" << book_ID << ",," << book_Title << ",," << user_ID << ",," << user_FirstName << ",," << user_LastName << ",," << dueDate << ",," << reserveDate;
    }
    else // If checkedout file cannot be found show a message to warn the admin
    {
        QMessageBox::warning(NULL, "FS ERROR: Failed to open Reserved File. Please try again later.", userReservedFile.errorString());
    }

    userReservedFile.close();
}

void FS::AddBook(QString book_ID, QString book_Title, QString book_Author, QString book_ISBN, QString book_Genre1, QString book_Genre2, QString book_Img)
{
    if(catalogueFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&catalogueFile);
        out << "\n" << book_ID << ",," << book_Title << ",," << book_Author << ",," << book_ISBN << ",," << book_Genre1 << ",," << book_Genre2 << ",," << book_Img;
    }
    else
    {
        QMessageBox::warning(NULL, "FS ERROR: Failed to open Catalogue File. Please try again later.", catalogueFile.errorString());
    }

    catalogueFile.close();
}

void FS::ModifyBook(QStringList bookData, QString bookID)
{
    if(bookData.contains(bookID)) // Check for the bookID
    {
        for(int i = 0; i < bookData.length(); i += 7)
        {
            if(bookData[i] == bookID)
            {
                // add mod fields example
                /* userData[i + 1] = ui->FirstName etc.
                 */
            }
        }

        if(catalogueFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
        {
            QTextStream out(&catalogueFile);
            for(int i = 0; i < bookData.length(); i += 7)
            {
                out << bookData[i] << ",," << bookData[i + 1] << ",," << bookData[i + 2] << ",," << bookData[i + 3] << ",," << bookData[i + 4] <<
                       ",," << bookData[i + 5] << ",," << bookData[i + 6] << "\n";
            }
        }
        else // If catalogue file cannot be found show a message to warn the admin
        {
            QMessageBox::warning(NULL, "FS ERROR: Failed to open Catalogue File. Please try again later.", catalogueFile.errorString());
        }
    }
    else // If bookID cannot be found show a message to warn the admin
    {
        QMessageBox::information(NULL, "FS ERROR: BookID not found in Catalogue File. Try again later.", QString("Book ID not found: " + bookID));
    }

    catalogueFile.close();
}

void FS::DeleteBook(QStringList bookData, QString bookID)
{
    if(bookData.contains(bookID))
    {
        for(int i = 0; i < bookData.length(); i += 7)
        {
            if(bookData[i] == bookID)
            {
                // Add Deletion fields EXAMPLE
                /* userData[i].remove(0, userData[i].length());
                 * userData[i + 1].remove(0, userData[i + 1].length());
                 * etc etc.
                 */
            }
        }

        if(catalogueFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
        {
            QTextStream out(&catalogueFile);
            // ADD OUTPUT OF USERDATA
            for(int i = 0; i < bookData.length(); i += 7)
            {
                out << bookData[i] << ",," << bookData[i + 1] << ",," << bookData[i + 2] << ",," << bookData[i + 3] << ",," << bookData[i + 4] << ",," << bookData[i + 5] << ",," <<
                       bookData[i + 6] << "\n";
            }
        }
        else // If catalogue file cannot be found show a message to warn the admin
        {
            QMessageBox::warning(NULL, "FS ERROR: Failed to open Catalogue File. Please try again later.", catalogueFile.errorString());
        }
    }
    else // If bookID cannot be found show a message to warn the admin
    {
        QMessageBox::information(NULL, "FS ERROR: BookID not found in Catalogue File. Try again later.", QString("Book ID not found: " + bookID));
    }

    catalogueFile.close();
}
