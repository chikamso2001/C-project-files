//
// Created by chikamso on 2023-04-01.
//
#include <iostream>
using namespace std;

void twoNumbers(const int &a, int &b){

    cout<<a<<" "<<b<<endl;
}

int main(){
    int x = 10;
    int * const p = &x;
    ++*p;
    int y = 20;
    twoNumbers(x,y);
}
