// Create a student class with name,rollNo,marks. Display details using a member function

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rollNo;
    float marks;

    void display(){
        cout << "Name : " << name << endl;
        cout << "Roll NO : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() 
{
    Student s;
    s.name = "Rahul";
    s.rollNo = 215;
    s.marks = 99.99;
    s.display();
    return 0;
}