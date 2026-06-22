// program to traverse array in reverse order using pointer

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

    cout << "Entered numbers are : " <<endl;
    for (int i=n-1; i>=0; i--){
        cout << *(ptr+i) << endl;
    }

    
    return 0;

}