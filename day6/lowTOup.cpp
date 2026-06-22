// program to convert lowercase string to uppercase string

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word in lowercase : ";
    cin >> s;

    int n = s.size();

    for (int i=0; i<n; i++){
        s[i] = toupper(s[i]);
    }

    cout << "word in uppercase : " << s << endl;
    return 0;
}