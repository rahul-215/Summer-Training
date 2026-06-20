// program to find second largest element in array

#include<iostream>
using namespace std;

int main()
{
    int arr[100];

    int n;
    cout <<"Enter the limit : ";
    cin >> n;

    cout << "Enter " << n << " number : ";

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int large1 = arr[0]; 
    int small = arr[0];
    
    for (int i=1; i<n; i++){  
        if (arr[i] > large1){
            large1 = arr[i];
        }  
        if (arr[i] < small){
            small = arr[i];
        }
    }
    
    int large2 = small; 

    for (int i=1; i<n; i++){  
        if (arr[i] == large1) continue;
        
        if (arr[i] > large2){
            large2 = arr[i];
        }
    }
    cout << "Second Largest element is : " << large2 << endl;


    return 0;
}