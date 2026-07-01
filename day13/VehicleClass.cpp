// Create a abstract class Vehicle with a pure virtual function start(). Derive a class Car and implement it.


#include<iostream>
using namespace std;

class Vehicle
{
    public:
    virtual void start() = 0;

};

class Car : public Vehicle
{
    public:
    void start() override
    {
        cout << "Car starts " << endl;
    }
};

int main()
{
    Vehicle* v = new Car();
    v->start();

    return 0;
}