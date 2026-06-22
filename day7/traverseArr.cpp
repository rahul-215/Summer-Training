// program to traverse an array using pointer

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int *ptr = arr;
    int n;

    cout << "Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " numbers : " ;
    for (int i=0; i<n; i++){
        cin >> *(ptr + i);
    }

    cout << "Entered number are : " << endl;
    for (int i=0; i<n; i++){
        cout << *(ptr+i) << endl;
    }

    return 0;

}