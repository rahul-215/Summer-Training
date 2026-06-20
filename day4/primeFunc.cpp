// program to check given number n is prime or not using function


#include<iostream>
using namespace std;

int prime(int n){

    int isprime = 1;
    if (n <= 1){
        cout << n << " is not a prime number" << endl;
        return 0;
    }


    for (int i=2; i*i<=n; i++){
        if (n%i == 0){
            isprime = 0;
            break;
        }
    }

    if (isprime == 0){
        cout << n << " is not a prime number" << endl;
    }
    else{
        cout << n << " is a prime number " << endl;
    }

}

int main()
{
    int n;

    cout << "Enter any number : ";
    cin >> n;

    prime(n);
    
    return 0;
}