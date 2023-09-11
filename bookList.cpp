#include "bookList.h"

BookList::BookList(){
    Capacity = 0;
    booksCount = 0;
}

BookList::BookList(int Capacity){
    this->Capacity = Capacity;
    Books = new Book[Capacity];
    booksCount = 0;
}

void BookList::addBook(const Book& book){
    if (booksCount < Capacity)
    {
        Books[booksCount] = book;
        Books[booksCount].setId(booksCount+1);
        booksCount++;
    }
    else
    {
        cout << "Error in Capacity" << endl;
    }

} // at the end of the array.

Book* BookList::searchBook(string bookName){
for (int i = 0; i < booksCount; i++)
    {
        if (bookName == Books[i].getTitle())
        {
            return &Books[i];
        }        
    }
return nullptr;
}

Book* BookList::searchBook(int bookID){
for (int i = 0; i < booksCount; i++)
    {
        if (bookID == Books[i].getId())
        {
            return &Books[i];
        }        
    }
return nullptr;
}

void BookList::deleteBook(int bookID){
    for (int i = 0; i < booksCount; i++)
    {
        if (Books[i].getId() == bookID)
        {
            while (i < booksCount - 1)
            {
                Books[i] = Books[i + 1];
                Books[i].setId(i+1);
                i++;
            }
        }
    booksCount--;
    Capacity--;
    break;
    }
} //delete a book

Book BookList::getTheHighestRatedBook(){

}

void BookList::getBooksForUser(const User & book){

}// get all books of this author

Book& BookList::operator[] (int ){

}

ostream&operator<<(ostream & output,const BookList & bookList){
    for (int i = 0; i < bookList.booksCount; i++)
    {
        output << bookList.Books[i] << "\t";
    }
    return output;  
}
 //to display all books
BookList::~BookList(){
    delete []Books;
}