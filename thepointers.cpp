//
// Created by chikamso on 2023-03-22.
//
#include <iostream>
using namespace std;
class Base{
public:
    virtual void fun1(){
        cout<<"The first function"<<endl;
    }
    static void fun2(){
        cout<<"The second function"<<endl;
    }
    static void fun3(){
        cout<<"The third function"<<endl;
    }
};
class Derived:public Base{
public:
    static void fun4(){
        cout<<"The forth function"<<endl;
    }
    static void fun5(){
        cout<<"The fifth function"<<endl;
    }
    void fun1(){
        cout<<"Function 1 of derived"<<endl;
    }
};
int main(){
    Base *P;
    //P = new Derived();
    P -> fun1();
    Base::fun3();
    Derived *Q;
}
