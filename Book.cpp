#include "Book.h"
int Book::count = 0;
Book::Book(){
    Title = "";
    Isbn = "";
    Category = "";
    averageRating = 0.0;
    numRate = 0;
    sumRates = 0.0;
    count++;
    ID = count;
    // User Author;
    boolAuthor = false;
}
Book::Book(string Title, string Isbn, string Category){
    this->Title = Title;
    this->Isbn = Isbn;
    this->Category = Category;
    count++;
    ID = count;
    averageRating = 0.0;
    // User Author;
    numRate = 0;
    sumRates = 0.0;
    boolAuthor = false;
}
Book::Book(const Book& book){
    Title = book.Title;
    Isbn = book.Isbn;
    ID = book.ID;
    Category = book.Category;
    averageRating = book.averageRating;
    // Author = book.Author;
    numRate = book.numRate;
    sumRates = book.sumRates;
    if (boolAuthor)
    {
        // this->Author = new User;
        // boolAuthor = true;
        // this->Author = book.Author;
        setAuthor(*book.Author);
    }
    
}
void Book::setTitle(string Title){
    this->Title = Title;
}
string Book::getTitle() const {
    return Title;
}
void Book::setIsbn(string Isbn){
    this->Isbn = Isbn;
}
string Book::getIsbn() const {
    return Isbn;
}
void Book::setId(int ID){
    this->ID = ID;
}
int Book::getId() const {
    return ID;
}
void Book::setCategory(string Category) {
    this->Category = Category;
}
string Book::getCategory()const {
    return Category;
}
void Book::setAuthor(const User & Author){
    boolAuthor = true;
    this->Author = new User(Author);
}
User Book::getAuthor() const {
    return *Author;
}
void Book::rateBook(double Rating) {
    numRate++;
    sumRates += Rating;
    averageRating = sumRates / numRate;
}
double Book::getAverageRating () const {
    return averageRating;
}
bool Book::operator==(const Book& book) {
    return Title == book.Title && Isbn == book.Isbn && ID == book.ID && Category == book.Category && averageRating == book.averageRating && Author == book.Author;
}
ostream &operator<<(ostream & output, const Book & book) {
    cout << "\n======================== ID : " << book.ID << " Book Info ========================" << endl;
    cout << "\tName" << "\tIsbn" << "\tCategory" << "\tID" << "\tAverage Rate" << endl;
    output << "\t" << book.Title << "\t" << book.Isbn << "\t" << book.Category << "\t" << book.ID << "\t" << book.averageRating << endl;
    if (book.boolAuthor)
    {
        cout << "\tAuthor : "<< *(book.Author);
    }
    return output;
}
istream &operator>>( istream & input, Book & book) {
    cout << "Enter Book Inforamtion" << endl;
    cout << "Title\t\t" << "Isbn\t\t" << "Category" << endl;
    input >> book.Title >> book.Isbn >> book.Category;
    // book.averageRating = 0.0;
    return input;
}

Book::~Book(){
delete Author;
}