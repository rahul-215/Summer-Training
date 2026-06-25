// program to remove duplicate element


#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[] = {1,1,2,3,3,4,5,5};

    set<int> s(arr,arr+8);

    for (int x : s){
        cout << x << " ";
    }

    return 0;
}