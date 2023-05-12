//
// Created by chikamso on 2023-02-03.
//
#include <iostream>
using namespace std;
int num;
int main(){
    cout<<"Enter a number: ";
    cin >> num;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            cout<<"This number is not a prime";
            return 0;
        }
    }
    cout<<"This is a prime number";

}
