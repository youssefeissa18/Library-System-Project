#include "User.cpp"
#include "Book.h"

int main(){
    Book B1,B2;
    B1.rateBook(2);
    B1.rateBook(3);
    B2.rateBook(4);
    cout << B1 << endl << B2 << endl;
    User U1("Youssef",20,"eissa","45124513");
    // U1.Display();
    cin >> U1;
    cout << U1;
    cout << "Hello World" << endl;
}