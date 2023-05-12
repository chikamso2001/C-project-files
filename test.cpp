#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int width;
public:
    explicit Rectangle(int l = 1, int w = 1);
    Rectangle(Rectangle &r);
    void setLength(int length);
    void setWidth(int width);
    int getLength() const{return length;}
    int getWidth() const{return width;}
    int Area() const;
    [[maybe_unused]] int Perimeter() const;
    bool isSquare() const;
};
class Cubiod:public Rectangle{
private:
    int height;
public:
    explicit Cubiod(int h = 1);
    Cubiod(Cubiod &c);
    void setHeight(int height);
    int getHeight() const{return height;}
    int Volume();
};

int main(){
    Cubiod C(21);
    cout<<C.Volume()<<endl;
}
Rectangle::Rectangle(int l, int w) {
    this->length = l;
    this->width = w;
}
void Rectangle::setLength(int len) {
    this->length = len;
}
void Rectangle::setWidth(int wid) {
    this->width = wid;
}

[[maybe_unused]] int Rectangle::Perimeter() const {
    return 2 *(length+width);
}
int Rectangle::Area() const {
    return length * width;
}
bool Rectangle::isSquare() const {
    if(length == width){
        return true;
    }
    return false;
}

void Cubiod::setHeight(int hei) {
    this->height = hei;
}
Cubiod::Cubiod(int h) {
    height = h;
}
int Cubiod::Volume() {
    return Area() * height;
}