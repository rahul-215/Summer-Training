// program to check given string is pallindrome or not

#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a word : ";
    cin >> s;

    int n = s.size();
    string a;

    
    for (int i=n-1; i>=0; i--){
        a += s[i];
    }

    int k = 1;
    for (int i=0; i<n; i++){
        if (s[i] != a[i]){
            k = 0;
            break;
        }
    }

    if (k == 1){
        cout << "Given word "<<s <<" is pallindrome" << endl;
    }
    else{
        cout << "Given word "<<s <<" is not pallindrome" << endl;
    }
    return 0;
}