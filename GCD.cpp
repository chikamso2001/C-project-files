//
// Created by chikamso on 2023-02-08.
//
#include <iostream>
using namespace std;
int m, n;
int main(){
    cout<<"Enter two numbers";
    cin >>m>>n;
    while(m > 0 && n > 0){
        if(m > n){
            m = m - n;
        }else if(m < n){
            n = n - m;
        }else if(m == n){
            cout<<"The common factor is "<<m<<endl;
            break;
        }
    }
}
