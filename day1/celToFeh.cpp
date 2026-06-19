// program to convert temperature Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main() {
    
    float cel,feh;

    cout << "Enter the temperature (in celsius) : ";
    cin >> cel;

    feh = ((9.0/5.0)*cel) + 32;

    cout << "Temperature in Fahrenheit : " << feh << endl;
    
    return 0;
}
