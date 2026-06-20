// program to find power using function


#include<iostream>
using namespace std;

int power(int n, int p){
    int ans = 1;

    for (int i=0; i<p; i++){
        ans *= n;
    }
    
    return ans;
}

int main()
{
    int n,p;

    cout << "Enter the number and its power : ";
    cin >> n >> p;

    cout << n << "^"<< p << " is : " << power(n,p) << endl;

    return 0;
}