// program to find the sum of arr using pointer

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int *ptr = arr;
    int n,sum = 0;

    cout << "Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " numbers : " ;
    for (int i=0; i<n; i++){
        cin >> *(ptr + i);
    }

    for (int i=0; i<n; i++){
        sum += *(ptr+i);
    }

    cout << "Sum of all elements is : " << sum << endl;
    return 0;

}