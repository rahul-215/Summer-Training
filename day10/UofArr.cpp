// program to find union of array

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {4,3,2,1,6};

    set<int> s;
    
    for (int x : a){
        s.insert(x);
    }

    for (int x : b){
        s.insert(x);
    }

    for (int x : s){
        cout << x << " ";
    }

    return 0;
}