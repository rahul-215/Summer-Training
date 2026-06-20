// program to build a simple calculator by switch statement

#include <iostream>
using namespace std;

int main() {
    
    float num1 ,num2;

    cout << "Enter any two numbers : ";
    cin >> num1 >> num2;

    char choice;
    cout << "Enter (+,-,*,/) : ";
    cin >> choice;

    switch(choice){

        case '+' : cout << "sum of given no. is : " << num1+num2 << endl; 
                    break;
        case '-' : cout << "subtraction of given no. is : " << num1-num2 << endl; 
                    break;
        case '*' : cout << "multiplication of given no. is : " << num1*num2 << endl; 
                    break;
        case '/' : cout << "division of given no. is : " << num1/num2 << endl; 
                    break;
        default : cout << "Invalid Input " << endl;
    }

    return 0;
}
