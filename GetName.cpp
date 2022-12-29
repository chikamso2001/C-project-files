#include <iostream>
using namespace std;

int main(){
    string name;
    std::cout<<"Please enter your name: ";
    getline(cin, name);
    cout<<"Your name is "<<name;
    return 0;
}