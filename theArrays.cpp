//
// Created by chikamso on 2023-02-13.
//
#include <iostream>
using namespace std;
int sum;
int main(){
    int anArray[7] = {4,8,2,5,1,8,2};
    for(int x : anArray){
        sum += x;
    }
    cout<<sum<<endl;
//The following is to find the max in the array
int max = 0;
int min;
for(int x: anArray){
    if(max > x){
        continue;
    }else if(max < x){
        max = x;
    }else continue;
}
    cout<<max;
}
