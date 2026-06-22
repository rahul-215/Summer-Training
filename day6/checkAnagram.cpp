// program to check given string is anagram or not

#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cout << "Enter two words : ";
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    for (int i=0; i<n; i++){ 
        for (int j=0; j<m; j++){
            if (a[i] == b[j]){
                a[i] = '0';
                b[j] = '0';
                break;
            }
        }
    }

    int k = 1;

    for (int i=0; i<n; i++){
        if (a[i] != '0'){
            k = 0;
            break;
        }
    }
    
    for (int i=0; i<m; i++){
        if (b[i] != '0'){
            k = 0;
            break;
        }
    }

    if (k == 1){
        cout << "Given words are anagram" << endl;
    }else{
        cout << "Given words are not anagram" << endl;
    }

    return 0;
}

