// Create a class Student with private data members and public getter and setter funcion


#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age;

    public:
    void setName(string a){
        name = a;
    }

    void setAge(int a){
        age = a;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }
};

int main()
{
    Student s1;
    s1.setName("Rahul");
    s1.setAge(25);
    cout << s1.getName() << endl;
    cout << s1.getAge() << endl;

    return 0;
}