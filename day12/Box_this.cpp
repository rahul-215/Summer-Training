// Use this pointer in setlenght() to resolve naming conflict ,then display length

#include<iostream>
using namespace std;

class Box
{
    public:
    int length;

    void setlength(int length){
        this->length = length ;
    }

    void display(){
        cout << "Length : " << length << endl;
    }
};

int main(){

    Box b;
    b.setlength(10);
    b.display();
    return 0;
}