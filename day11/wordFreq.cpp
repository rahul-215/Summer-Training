// program to find the frequency of words


#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> words;

    words["apple"]++;
    words["banana"]++;
    words["apple"]++;

    for (auto x : words)
    {
        cout << x.first << " -> " << x.second <<endl;
    }
    return 0;
}