//
// Created by chikamso on 2023-02-03.
//
#include <iostream>
using namespace std;
int num;
int main(){
    cout<<"Enter a number to find it's factor: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cout<<i<<" "<<endl;
        }else{continue;}
    }
}