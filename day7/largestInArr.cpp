// program to find the largest element int arr using pointer

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int *ptr = arr;
    int n,large = arr[0];

    cout << "Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " numbers : " ;
    for (int i=0; i<n; i++){
        cin >> *(ptr + i);
    }

    for (int i=0; i<n; i++){
        if (*(ptr+i) > large){
            large = *(ptr+i);
        }
    }

    cout << "largest elements is : " << large << endl;
    return 0;

}