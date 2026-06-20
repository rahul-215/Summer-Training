// program to find sum of all element in array


#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n,sum=0;
    cout <<"Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " number : ";

    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    

    for (int i=0; i<n; i++){
        sum += arr[i];
    }

    cout << "Sum is : " << sum << endl;
    return 0;
}