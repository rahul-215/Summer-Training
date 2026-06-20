// program to reverse element in array

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

    for (int i=n-1; i>=0; i--){
        cout << arr[i] << endl;
    }


}