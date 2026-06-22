// program to print the address of a variable

#include<iostream>
using namespace std;

int main()
{
    int a = 8;
    int *ptr = &a;
    int x[10];
    int *aptr = x;

    cout << "value of a : " << a << endl;
    cout << "address of a : " << &a << endl;

    cout << "value of ptr : " << ptr << endl;
    cout << "address of ptr : " << &ptr << endl;
    cout << "value of ptr value " << *ptr << endl;

    cout << "address of arr x : " << x << endl;
    cout << "value of aptr : " << aptr << endl;

    return 0;
}