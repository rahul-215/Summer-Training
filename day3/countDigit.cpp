// program to count digits in a number


#include<iostream>
using namespace std;

int main()
{
    int n,count = 0;

    cout << "Enter any number : ";
    cin >> n;

    while(n > 0){
        count++;
        n = n / 10;
    }

    cout << "Total digits are : " << count << endl;
    return 0;
}