// program to find maximum element in array


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

    int large = arr[0];

    for (int i=1; i<n; i++){
        if (arr[i] > large){
            large = arr[i];
        }
    }

    cout << "Maximum element in the arr is : " << large << endl;
    return 0;
}