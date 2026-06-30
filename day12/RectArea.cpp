// Create a Rectangle class ,set length/width via setData(),return area from area().


#include<iostream>
using namespace std;

class Rectangle
{
    public:
    float length,width;

    void setData(float l,float w){
        length = l;
        width = w;
    }

    float area(){
        return length * width;
    }
};


int main()
{
    Rectangle r;
    r.setData(2,2.5);
    cout << "Area : " << r.area() << endl;
    return 0;
}