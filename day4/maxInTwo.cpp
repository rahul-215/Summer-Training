// program to find maximum element in two number using function


#include<iostream>
using namespace std;

int max(int a, int b){
    if (a > b) return a;
    else return b;
}

int main()
{
    int num1,num2;
    
    cout << "Enter any two numbers : ";
    cin >> num1 >> num2;

    cout << "Maximum is : " << max(num1,num2) << endl;
    
    return 0;
}