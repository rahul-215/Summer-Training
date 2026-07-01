// Create a class Calculator and overload a function add() to add two integers and two floating numbers 


#include<iostream>
using namespace std;

class Calculator
{
    public:
    int add(int a,int b){
        return a+b;
    }

    float add(float a ,float b){
        return a+b;
    }
};

int main()
{
    Calculator c;
    cout << c.add(1,2) << endl;
    cout << c.add(1.1f,2.2f) << endl;

    return 0;
}