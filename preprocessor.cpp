//
// Created by chikamso on 2023-04-01.
//
#include <iostream>
using namespace std;
#define PI 3.1425
#define SQR(X) X * X
#define MSG(X) #X
#define c cout

//Here I will demonstrate the use of namespaces in distinguishing functions of the same name
namespace first{
    void fun(){
        cout<<"This is the first function"<<endl;
    }
}
namespace second{
    void fun(){
        cout<<"This is the second function"<<endl;
    }
}

//Demonstrating the constructor destructor cycle & virtual destructors
class Base{
public:
    Base(){
        cout<<"The Base constructor"<<endl;
    }
    virtual ~Base(){
        cout<<"The Base destructor"<<endl;
    }
};
class Derived:public Base{
public:
    Derived(){
        cout<<"The Derived constructor"<<endl;
    }
    ~Derived() override{
        cout<<"The derived destructor"<<endl;
    }
};



int main(){
    cout<<MSG(This has already been preprocessed to a literal string)<<endl;
    cout<<MSG(The area of a unit circle is )<<PI * 1<<endl;
    c<<SQR(24)<<endl;
    first::fun();
    second::fun();

    Base *ptr = new Derived();
    delete ptr;
}