// program to find first non repeating character    

#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s = "aabbcdceef";
    map<char,int> freq;

    for (char ch : s)
    {
        freq[ch]++;
    }

    for (char ch : s)
    {
        if (freq[ch] == 1)
        {
            cout << ch << endl;
            break;
        }
    }
    return 0;
}