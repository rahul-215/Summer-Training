// Use a constructor to initialize Employee name and id. Display using display()


#include<iostream>
using namespace std;

class Employee
{
    public:
    string name;
    int id;

    Employee(string a,int b){
        name = a;
        id = b;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
    }
};


int main()
{
    Employee e1("Rahul",215);
    e1.display();
    return 0;
}