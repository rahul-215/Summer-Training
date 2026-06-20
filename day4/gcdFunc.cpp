// program to find gcd of two number using function

#include<iostream>
using namespace std;

int gcd(int a, int b){

    int n;
    if (a < b){
        n = a;
    }else{
        n = b;
    }

    for (int i=n; i>=1; i--){
        if (a%i == 0 && b%i == 0){
            return i;
        }
    }

    
}

int main()
{
    int num1,num2;

    cout << "Enter any two number : " ;
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is : " << gcd(num1,num2) << endl; 
    
    return 0;
}