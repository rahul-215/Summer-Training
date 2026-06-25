// program to find maximum element in a vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,5,3,7,4,2};

    int mx = v[0];

    for (int x : v){
        if (x > mx){
            mx = x;
        }
    }

    cout << "Maximum is : " << mx << endl;

    return 0;
}