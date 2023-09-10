#include "User.h"



// Static Variable for ID
int User::count = 0;

//Empty Constructor to give initial value for Varaible
User::User(){
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
    return (this->ID == Other.ID && this->Email == Other.Email && this->Age == Other.Age && this->Name == Other.Name);
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
    cout << "\n======================== ID : " << user.ID << " User Info ========================" << endl;
    cout << "\t\tName" << "\t\tAge" << "\t\tID" << endl;
    output << "\t\t" << user.Name << "\t\t" << user.Age << "\t\t" << user.ID << endl;
    cout << "=============================================" << endl;
    return output;
}

// Opertor Overloading To cin Object
istream &operator>>(istream& input, User& user){
    cout << "Enter Your Name" << endl;
    input >> user.Name;
    cout << "Enter Your Age" << endl;
    input >> user.Age;
    cout << "Enter Your Email" << endl;
    input >> user.Email;
    cout << "Enter Your Password" << endl;
    input >> user.Password;
    return input;
}

void User::Display(){
    cout << "\t\tName" << "\t\tAge" << "\t\tID" << endl;
    cout << "\t\t" << Name << "\t\t" << Age << "\t\t" << ID << endl;
}