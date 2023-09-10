#include "User.cpp"
#include "Book.cpp"

int main(){
    User U1, U2, U3;
    Book B1;
    User U4;
    cin >> U4;
    cout << "==============================" << endl;
    B1.setAuthor(U4);
    cout << B1;
}