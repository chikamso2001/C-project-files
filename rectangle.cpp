//
// Created by chikamso on 2023-03-01.
//
class Rectangle{
public:
    int length;
    int width;

    int area(){
        int Area = length * width;
        return Area;
    }
    int perimeter(){
        int perimeter = 2 * (length + width);
        return perimeter;
    }
};
#include <iostream>
using namespace std;
int main(){
    Rectangle r1, r2;
    r1.length = 16; r2.length = 14;
    r1.width = 13; r2.width = 19;
    int r1Area = r1.area();
    int r2Area = r2.area();
    cout<<r1Area<<" "<<r2Area<<endl;

    Rectangle *P = &r1; //This creates a pointer towards the r1 Object
    P -> length = 17;
    cout<<P -> area()<<endl;

    //Creating a memory in the Heap memory
    auto *Q = new Rectangle;
    Q -> length = 15;
    Q -> width = 12;
    cout<<"The area of the Q labeled rectangle is "<<Q -> area()<<endl;
    return 0;
}
