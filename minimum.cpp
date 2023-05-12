//
// Created by chika on 2023-02-27.
//
#include <iostream>
using namespace std;
template <class T>  //For just two integers
        T Max(T x, T y){
            if(x > y){
                return x;
            }else return y;
        }

// for three integers
template <class T> // For three numbers
        T Max(T x, T y, T z){
            T num[3] = {x, y, z};
            T max = 0;
            for(auto & i : num){
                if(max < i){
                    max = i;
                }
            }
            return max;
        }
int Min(int a, int b, int c){

    int num[3] = {a, b, c};
    int min = a;
    for(int i : num){
        if(min > i){
            min = i;
        }
    }
    return min;
}
int main(){
    cout<<Min(51,43,100)<<endl;
    cout<<Max(31,52,11)<<endl;
    cout<<Max(12.3,16.3,16.4)<<endl;
    return 0;
}