// program to add two matrix

#include<iostream>
using namespace std;

int main()
{
    int mat1[2][2],mat2[2][2],ans[2][2];


    cout << "Enter the value of mat1(2x2) : "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> mat1[i][j];
        }
    }


    cout << "Enter the value of mat2(2x2) : "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin >> mat2[i][j];
        }
    }

    cout << "Addition of mat1 and mat2 is : " << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}