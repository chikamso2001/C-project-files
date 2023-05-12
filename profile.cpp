//
// Created by chikamso on 2023-03-03.
// Here I am creating a class with its setters and getters
#include <iostream>
using namespace std;
class profile{
private:
    string name;
    int age;
public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        if(age > 0){
            this -> age = age;
        }else this -> age = 0;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};


int main(){
    auto *person1 = new profile;
    string name;
    cout<<"Enter your name ";
    getline(cin,name);

    int age;
    cout<<"Enter your age ";
    cin >> age;
    person1->setName(name);
    person1->setAge(age);
}
