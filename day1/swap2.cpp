// program to swap to numbers without third variable

#include <iostream>
using namespace std;

int main() {
    
    int a ,b ;  

    cout << "Enter any two numbers : ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a : " <<  a << endl;
    cout << "b : " << b << endl;
    
    return 0;
}
