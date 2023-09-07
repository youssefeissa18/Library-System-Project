#include "User.h"



// Static Variable for ID
int User::count = 0;

//Empty Constructor to give initial value for Varaible
User::User(){
    cout << "The List Is Empty\n";
    Name = "";
    Age = 0;
    Email = "";
    Password = "";
    count++;
    ID = count;
}

// Paramitrize Constructor to give initial value for Varaible
User::User(string  Name, int  Age, string  Email, string  Password){
    this->Name = Name;
    this->Age = Age;
    this->Email = Email;
    this->Password = Password;
    count++;
    ID = count;
}


// Copy Constructor
User::User(const User& Other){
    Name = Other.Name;
    Age = Other.Age;
    Email = Other.Email;
    Password = Other.Password;
    ID = Other.ID;
}


// Opertor Overloading To Compare Between Two Object
bool User::operator==(const User& Other){
    return (this->ID == Other.ID);
}


// Setters and Getters
void User::setName(string Name){
    this->Name = Name;
}
string User::getName() const{
    return Name;
}
void User::setPassword(string Password){
    this->Password = Password;
}
string User::getPassword()const{
    return Password;
}
void User::setEmail(string Email){
    this->Email = Email;
}
string User::getEmail()const {
    return Email;
}
void User::setAge(int Age){
    this->Age = Age;
}
int User::getAge() const{
    return Age;
}
void User::setId(int ID){
    this->ID = ID;
}
int User::getId() const{
    return ID;
}

// Opertor Overloading To cout Object
ostream &operator<<(ostream& output, const User& user) {
    output << "User: " << user.Name << " (ID: " << user.ID << ")";
    return output;
}

// Opertor Overloading To cin Object
istream &operator>>(istream& input, User& user){
    cout << "Enter Your Name" << endl;
    input >> user.Name;
    cout << "Enter Your ID" << endl;
    input >> user.ID;
    return input;
}
