// program to print string in reverse order using recursion

#include<iostream>
using namespace std;

void reverse(string s,int n){
    if (n < 0) return ;

    cout << s[n];
    reverse(s,n-1);
}


int main()
{
    string s;
    
    cout << "Enter a word : ";
    cin >> s;

    int n = s.size();

    reverse(s,n-1);
    return 0;
}