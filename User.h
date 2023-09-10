#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class User{
private:
    string Name;
    int Age;
    int ID;
    string Password;
    string Email;
public:
    static int count;
    User();
    User(string  , int  , string  , string  );
    User(const User& );
    bool operator==(const User&  );
    void setName(string );
    string getName() const;
    void setPassword(string );
    string getPassword()const;
    void setEmail(string );
    string getEmail()const ;
    void setAge(int );
    int getAge()const;
    void setId(int );
    int getId()const;
    void Display ();
    friend ostream &operator<<(ostream &, const User &);
    friend istream &operator>>( istream & , User &);
};
#endif//USER_H_INCLUDED