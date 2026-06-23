// program to calculate power using recursion

#include<iostream>
using namespace std;

int power(int a, int b){
    if (b == 1) return a;

    return a * power(a,b-1);
}

int main()
{
    int a,b;
    cout << "Enter number and its power : ";
    cin >> a >> b;


    cout << a << "^" << b << " : " << power(a,b)<<endl;
    return 0;
}