// program to reverse a vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1,2,5,3,7,4,2,3,1,5};

    reverse(v.begin(),v.end());

    for (int x : v){
        cout << x << " ";
    }

    return 0;
}