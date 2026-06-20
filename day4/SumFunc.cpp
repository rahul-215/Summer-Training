// program to calculate sum from a function

#include<iostream>
using namespace std;

float sum(float a, float b){
    return a+b;
}

int main()
{

    int num1,num2;

    cout<< "Enter any two number : ";
    cin >> num1 >> num2;

    cout << "Sum is : " << sum(num1,num2) << endl;

    return 0;
}