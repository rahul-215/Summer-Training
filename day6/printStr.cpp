// program to print string in reverse order

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word : ";
    cin >> s;

    int n = s.size();

    cout << "Word in reverse order : ";
    for (int i=n-1; i>=0; i-- ){
        cout << s[i];
    }
    cout << endl;
    
    return 0;
}