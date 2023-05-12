//
// Created by chikamso on 2023-02-13.
//
#include <iostream>
using namespace std;
int main(){
    int key;
    int A[10], n = 10;
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    cout<<"Enter Key: ";
    cin >> key;
    for(int x:A){
        if(x == key){
            cout<<"Successful";
            break;
        }else if(x == A[9]){
            cout<<"Unsuccessful";
            break;
        }
    }
    return 0;
}
