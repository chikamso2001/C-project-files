//
// Created by chikamso on 2023-03-04.
//Trying out scope resolution
#include <iostream>
#include <cmath>
using namespace std;
class Shapes{
private:
    int length;
    int width;
    int radius;
    string name;
public:
    Shapes(string Name, int Width,int Length){
        setShape(Name);
        setWidth(Width);
        setLength(Length);
    }
    Shapes(string Name, int Radius){
        setShape(Name);
        if(Radius > 0){
            setRadius(Radius);
        }else setRadius(0);
    }
    int AreaCircle();
    int PerimeterCircle();
    int Area();
    int Perimeter();

    //Setters
    void setShape(string Name){
        this->name = Name;
    }
    void setRadius(int Radius){
        this->radius = Radius;
    }
    void setWidth(int Width){
        this->width = Width;
    }
    void setLength(int Length){
        this->length = Length;
    }

    //Getters
    string getShape(){
        return name;
    }
    int getLength(){
        return length;
    }
    int getWidth(){
        return width;
    }
    int getRadius(){
        return radius;
    }
};

int radius = 0;
int width = 0;
int length = 0;

int main(){
    string theShape;
    cout<<"Which shape do you want to create: ";
    cin >> theShape;

    //converting from uppercase to lowercase
    for(int i = 0; i < theShape.length(); i++){
        if(theShape[i] > 'A' && theShape[i] < 'Z'){
            theShape[i] = theShape[i] + 32;
        }
    }
    if(theShape == "circle"){
        cout<<"Enter the radius of the circle: ";
        cin >> radius;
        auto shape1 = Shapes(theShape,radius);
        cout<<"The area of the circle is "<<shape1.AreaCircle()<<endl;
        cout<<"The perimeter of the circle is "<<shape1.PerimeterCircle()<<endl;
    }else{
        auto shape1 = Shapes(theShape,width,length);
        cout<<"Enter the width: ";
        cin >> width;
        cout << "Enter the length: ";
        cin >> length;
        cout<<"The perimeter of the shape is "<<shape1.Perimeter()<<endl;
        cout<<"The area of the shape is "<<shape1.Area()<<endl;

    }

}
int Shapes::AreaCircle(){
    return 2 * acos(0.0) * pow(::radius,2);
}
int Shapes::PerimeterCircle() {
    return 4 * acos(0.0) * ::radius;
}
int Shapes::Area() {
    return ::length * ::width;
}
int Shapes::Perimeter() {
    return (::length + ::width)*2;
}

