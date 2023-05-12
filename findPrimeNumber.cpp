//
// Created by chikamso on 2023-02-03.
//
#include <iostream>
using namespace std;
int long num;
int counter;
int main(){
    cout<<"Enter a number: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            counter++;
        }
        if(counter > 2){
            cout<<"Not a prime";
            return 0;
        }
    }
    if(counter == 2){
        cout<<"It's a prime";
    }else cout<<"It's not a prime";
    return 0;
}