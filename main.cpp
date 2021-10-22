#include <iostream>
// using std::string;
using namespace std;

class   AbstractFriends
{
    virtual void printClass() = 0;
};
class Friends
{
protected:
    string Name;
    int Age;
    
public:
    string getName()
    {
        return Name;
    }
    void setName(string name)
    {
        Name = name;
    }
    void printClass()
    {
        cout << "Name is " << Name << endl;
        cout << "Age is " << Age << endl;
    }
    Friends(string name, int age)
    {
        Name = name;
        Age = age;
    }
};

class CloseFriends: public Friends
{
public:
    string FavM;
    CloseFriends(string name, int age, string movie):Friends(name, age)
    {
        FavM = movie;
    }
};

int main()
{
    CloseFriends   close("mohamed", 32, "fight club");
    string name = close.getName();
    cout << name << endl;
}