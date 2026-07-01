// Create a class Animal and derive a class Dog from it . Display a message using inheritance

#include<iostream>
using namespace std;

class Animal
{
    public:
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog: public Animal
{
    public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Dog d;
    d.sound();
    d.bark();

    return 0;
}