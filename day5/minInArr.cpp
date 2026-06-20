// program to find minimum element in array


#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cout <<"Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " number : ";

    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    int small = arr[0];

    for (int i=1; i<n; i++){
        if (arr[i] < small){
            small = arr[i];
        }
    }

    cout << "Minimum element in the arr is : " << small << endl;
    return 0;
}