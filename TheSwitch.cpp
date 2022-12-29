//
// Created by chika on 2022-12-29.
#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Please enter a number between 0 and 8: ";
    cin >> day;
    switch (day) {
        case 1: cout<<"Sunday"; break;
        case 2: cout<<"Monday"; break;
        case 3: cout<<"Tuesday"; break;
        case 4: cout<<"Wednesday";break;
        case 5: cout<<"Thursday"; break;
        case 6: cout<<"Friday"; break;
        case 7: cout<<"Saturday";break;
        default: cout<<"Invalid input"<<endl;
    }
}
//
