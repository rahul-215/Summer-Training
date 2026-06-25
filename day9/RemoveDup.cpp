// program to remove duplicate element in vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1,1,2,3,2,2,3,4,5};
    
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for (int x : v){
        cout << x << " ";
    }
    return 0;
}