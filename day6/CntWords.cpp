// program to count words in a given string

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a sentence : ";
    getline(cin,s);

    int n = s.size();

    int count = 0;
    for (int i=0; i<n; i++){
        if (s[i] == ' '){
            count++;
        }
    }
    count++;
    

    cout << "Total words are : " << count << endl;
    return 0;
}