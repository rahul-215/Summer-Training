// program to find minimum element in the vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,5,3,7,4,2,11,10};

    int mx = v[0];

    for (int x : v){
        if (x < mx){
            mx = x;
        }
    }

    cout << "Minimum is : " << mx << endl;

    return 0;
}