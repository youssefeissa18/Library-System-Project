#ifndef Book_H_INCLUDED
#define Book_H_INCLUDED
#include "User.h"
// #include <bits/stdc++.h>
// using namespace std;
class Book
{
private:
    string Title;
    string Isbn;
    int ID;
    string Category;
    double averageRating;
    User *Author;
    bool boolAuthor;
    int numRate;
    double sumRates;
public:
    static int count;
    Book();
    Book(string , string , string );
    Book(const Book& );
    void setTitle(string );
    string getTitle() const ;
    void setIsbn(string );
    string getIsbn() const;
    void setId(int);
    int getId() const;
    void setCategory(string );
    string getCategory()const;
    void setAuthor(const User & );
    User getAuthor() const;
    void rateBook(double );
    double getAverageRating () const;
    bool operator==(const Book&);
    friend ostream &operator<<(ostream &,const Book &);
    friend istream &operator>>( istream &, Book &);
    ~Book();
};


#endif//Book_H_INCLUDED
