//
// Created by chikamso on 2023-03-23.
//
#include <iostream>
using namespace std;
class Your;
class My{
private:
    string name;
    int age;
public:
    string hobby;
    friend void DOB();
    friend Your;
};
class Your{
private:
    string Name;
    string age;
public:
    string Hobby;
    My perons2;
    void fun(){
        cout<<perons2.age<<endl;
    }

};
void DOB(){
    ::My person1;
    int DoB = 2023 - person1.age;
    cout<<"You where born in "<<DoB<<endl;
}
