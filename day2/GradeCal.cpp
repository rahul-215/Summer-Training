//program to find grade of given percentage

#include <iostream>
using namespace std;

int main() {

    int percentage;

    cout << "Enter your percentage : ";
    cin >> percentage;

    if (percentage > 90){
        cout << "Grade : A " << endl; 
    }
    else if (percentage > 80 && percentage <= 90){
        cout << "Grade : B " << endl;
    }
    else if (percentage > 70 && percentage <= 80){
        cout << "Grade : C " << endl;
    }
    else if (percentage > 60 && percentage <= 70){
        cout << "Grade : D " << endl;
    }
    else if (percentage > 50 && percentage <= 60){
        cout << "Grade : E " << endl;
    }
    else if (percentage <= 50){
        cout << "Fail " << endl;
    }
    return 0;
}
