//
// Created by chikamso on 2023-02-01.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    int counter = 0;
    cout<<"Enter a number ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        counter += i;
    }
    cout<<counter;
}
