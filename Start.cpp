#include "User.cpp"
#include "Book.cpp"
#include "userList.cpp"
int main(){
    UserList U(5);
    User U1;
    User U2;
    User U3;
    User U4;
    U.addUser(U1);
    U.addUser(U2);
    U.addUser(U3);
    U.addUser(U4);
    U.deleteUser(3); 
    cout << U << endl;
    cout << "Hello World" << endl;
}