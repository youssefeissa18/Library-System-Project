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
        Users[usersCount].setId(usersCount+1);
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

void UserList::deleteUser(int userID){
    for (int i = 0; i < usersCount; i++)
    {
        if (Users[i].getId() == userID)
        {
            while (i < usersCount - 1)
            {
                Users[i] = Users[i + 1];
                Users[i].setId(i+1);
                i++;
            }
        }
    usersCount--;
    Capacity--;
    break;
    }
}

ostream &operator<<(ostream& output,const UserList& userList){
    for (int i = 0; i < userList.usersCount; i++)
    {
        output << userList.Users[i] << "\t";
    }
    return output;  
}

UserList::~UserList(){
    delete []Users;
}