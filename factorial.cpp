//
// Created by chikamso on 2023-02-01.
//
#include <iostream>
using namespace std;
int n;
int num = 1;

int main(){
    cout<<"Enter a number to find it's factorial: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        num *= i;
    }
    cout << num;
}