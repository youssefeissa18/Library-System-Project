    #include "Book.h"
    int Book::count = 0;
    Book::Book(){
        cout << "The List Is Empty\n";
        Title = "";
        Isbn = "";
        Category = "";
        averageRating = 0.0;
        count++;
        ID = count;
        User Author;
    }
    Book::Book(string Title, string Isbn, string Category){
        this->Title = Title;
        this->Isbn = Isbn;
        this->Category = Category;
        count++;
        ID = count;
        averageRating = 0.0;
        User Author;
    }
    Book::Book(const Book& book){
        Title = book.Title;
        Isbn = book.Isbn;
        ID = book.ID;
        Category = book.Category;
        averageRating = book.averageRating;
        Author = book.Author;
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
        this->Author = Author;
    }
    User Book::getAuthor() const {
        return Author;
    }
    void Book::rateBook(double averageRating) {

    }
    double Book::getAverageRating () const {
        return averageRating;
    }
    bool Book::operator==(const Book& book) {

    }
    ostream &operator<<(ostream & output, const Book & book) {

    }
    istream &operator>>( istream & input, Book & book) {
        
    }
