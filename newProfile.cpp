//
//
//Created by chikamso on 2023-03-04.
// Here I will be creating objects with constructors
#include <iostream>
#include <utility>
using namespace std;


class YourProfile{
private:
    string name;
    int age;
    int DOB;
public:
    YourProfile(){
        age = 1;
        name = "";
        DOB = 2023 - age;
    }
    YourProfile(string name, int age){
        setName(std::move(name));
        setAge(age);
        DOB = 2023 - age;
    }



    YourProfile(YourProfile(&profile)){
        name = profile.name;
        age = profile.age;
        DOB = 2023 - age;
    }
    void setName(string Name){
        name = std::move(Name);
    }
    void setAge(int Age){
        if(Age > 0){
            this -> age = Age;
        }else this -> age = 1;
    }
    string getName(){
        return name;
    }
    [[nodiscard]] int getAge() const{
        return age;
    }
    [[nodiscard]] int getDOB() const{
        return DOB;
    }

};

int main(){
    string name;
    int age;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your age ";
    cin >> age;
    YourProfile profile1 = YourProfile(name,age);
    cout<<"Hello "<<profile1.getName()<<" from my record you where born on "<<profile1.getDOB()<<endl;
    cout<<"You are "<<profile1.getAge()<<" years old"<<endl;
}
