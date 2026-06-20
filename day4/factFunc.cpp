// program to find factorial of a number n using function


#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }

    cout << "Factorial of " << n << " is : " << fact << endl;
}

int main()
{

    int n;

    cout << "Enter a number : ";
    cin >> n ;

    factorial(n);

    return 0;
}