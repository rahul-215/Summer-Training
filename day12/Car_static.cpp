// count total car objects created using a static variable increamented in constructor

#include<iostream>
using namespace std;

class Car{
    public:

    static int count;

    Car(){
        count++;
    }
};

int Car::count = 0;

int main()
{
    Car c1,c2,c3;
    cout << "Total objects : " << Car::count;
    return 0;
}