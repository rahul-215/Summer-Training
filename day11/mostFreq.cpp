// program to find most frequent element

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1,2,2,2,3,4,5,5};
    map<int,int> freq;

    for (int x : arr){
        freq[x]++;
    }

    int ans = -1;
    int mx = 0;

    for (auto x : freq)
    {
        if (x.second > mx)
        {
            mx = x.second;
            ans = x.first;
        }
    }
    cout << "Most frequent : " << ans << endl;
    return 0;
}