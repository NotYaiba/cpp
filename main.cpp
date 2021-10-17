#include <iostream>
// using std::string;
using namespace std;
class Friends
{
private:
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

int main()
{
    Friends frd1("Yaiba", 21);
    frd1.printClass();
}