// program to find largest number in given three numbers

#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter any three numbers : ";
    cin >> a >> b >> c;

    if ((a>b) && (a>c)){
        cout << a << " is greater than " << b << " and " << c << endl;
    }
    else if (b > c){
        cout << b << " is greater than " << a << " and " << c << endl;
    }
    else{
        cout << c << " is greater than " << a << " and " << b << endl;
    }
    return 0;
}
