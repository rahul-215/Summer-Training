//program to find intersection of array

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> a = {1,2,3,4,5};
    set<int> b = {1,2,7,6,5};

    for (int x : a){
        if (b.count(x)){
            cout << x << " ";
        }
    }
    
    return 0;
}