// program to count distinct element

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr[] = {1,2,3,3,4,7,9,5,0};

    set<int> s(arr,arr+9);

    cout << "Distinct element are : " << s.size() << endl;
    
    return 0;
}