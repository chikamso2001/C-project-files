//
// Created by chikamso on 2023-02-24.
//
#include <iostream>
using namespace std;
int main(){
    string email;
    cout<<"Please enter your email address: ";
    cin >> email;
    int index = email.find_first_of('@');
    string username = email.substr(0,index);
    cout<<"Your username is "<<username<<endl;
    return 0;
}
