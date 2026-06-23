// program to check given number is pallindrome using recursion

#include<iostream>
using namespace std;


void reverse(int a, int &rev){
    
    if (a <= 0) return ;

    int r = a % 10;
    rev = (rev * 10) + r;
    a = a / 10;
    reverse(a,rev);
    
}
int main()
{
    int n;
    
    cout << "Enter a multi digit number : ";
    cin >> n;

    int rev = 0;
    reverse(n,rev);

    if (n == rev){
        cout << "Given number is pallindrome " << endl;
    }else{
        cout << "Given number is not pallindrome" << endl;
    }
    return 0;
}