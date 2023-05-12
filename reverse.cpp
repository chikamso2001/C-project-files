//
// Created by chikamso on 2023-02-08.
//
#include <iostream>
using namespace std;
int num;
int tempNum = 0;
int newNum = 0;
int main(){
    cout<<"Enter a number: ";
    cin >> num;
    while(num > 0){
        tempNum = num % 10;
        num = num / 10;
        newNum = newNum * 10 + tempNum;
    }
    cout<<newNum;
    return 0;
}
