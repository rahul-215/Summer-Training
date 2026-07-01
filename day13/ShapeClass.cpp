// Create a class Shape and derive Rectangle from in. Override the function display()


#include<iostream>
using namespace std;

class Shape 
{
    public:
    virtual void display()
    {
        cout << "Generic shape" << endl;
    }
};

class Rectangle : public Shape
{
    public:
    void display() 
    {
        cout << "Rectangle : l x b" << endl;
    }
};

int main()
{
    Shape* s = new Rectangle();
    s->display();

    return 0;
}