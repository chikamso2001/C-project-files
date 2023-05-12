//
// Created by chikamso on 2023-02-03.
//
#include <iostream>
using namespace std;
int num;
int sumOfFactor = 0;
int main(){
    cout<<"Enter a number to check if it's a perfect number: ";
    cin >> num;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sumOfFactor += i;
        }else continue;
    }
    if(sumOfFactor == num){
        cout<<num<<" is a perfect number";
    }else cout<<num<<" is not a perfect number";

    return 0;
}