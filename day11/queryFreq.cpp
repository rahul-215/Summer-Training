// program to give the answer of queries

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1,2,3,2,1,3,5,4,3,5};
    map<int,int> freq;

    for (int x : arr){
        freq[x]++;
    }

    cout << freq[1] << endl;
    cout << freq[3] << endl;

    return 0;
}
