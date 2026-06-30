// program to count frequency of element in an array

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1,1,2,3,4,2,3,4,5};
    map<int,int> freq;

    for (int x : arr){
        freq[x]++;
    }

    for (auto x : freq){
        cout << x.first << " -> " << x.second << endl;
    }
    return 0;
}