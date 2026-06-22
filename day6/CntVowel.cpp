// program to count vowels in a string 

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word : ";
    cin >> s;

    int count = 0;
    for (int i=0; s[i]!='\0'; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U'){
            count++;
        }
    }

    cout << "Total number of vowels in the given word : " << count << endl;
    return 0;
}