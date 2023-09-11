#ifndef userList_H_INCLUDED
#define userList_H_INCLUDED
#include "User.h"
class UserList
{
private:
    User* Users;
    int Capacity;
    int usersCount;
public:
    UserList();
    UserList(int );
    void addUser(User &); 
    User* searchUser(string );
    User* searchUser(int );
    void deleteUser(int );
    friend ostream &operator<<( ostream& ,const UserList&);
    ~UserList();
};
#endif//userList_H_INCLUDED
