#include "userList.h" 
    
UserList::UserList(){
    Capacity = 0;
    usersCount = 0;
}
UserList::UserList(int Capacity){
    this->Capacity = Capacity;
    Users = new User[Capacity];
    usersCount = 0;
}
void UserList::addUser(User & User){
    if (usersCount < Capacity)
    {
        this->Users[usersCount] = User;
        usersCount++;
    }
    else
    {
        cout << "Error in Capacity" << endl;
    }
    
    
}
User* UserList::searchUser(string userName){
    for (int i = 0; i < usersCount; i++)
    {
        if (userName == Users[i].getName())
        {
            return &Users[i];
        }        
    }
    return nullptr;
    
}
User* UserList::searchUser(int userID){
     for (int i = 0; i < usersCount; i++)
    {
        if (userID == Users[i].getId())
        {
            return &Users[i];
        }        
    }
    return nullptr;
}
void UserList::deleteUser(int ){

}
ostream &operator<<(ostream& output,const UserList& userList){
    
}
UserList::~UserList(){
    delete Users;
}