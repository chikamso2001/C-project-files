//
// Created by chikamso on 2023-03-01.
//
#include <iostream>
using namespace std;
int fun(int key, int theArr[], int n){
    for(int i = 0; i < n; i++){
        if (theArr[i] == key)
            return i;
    }
}
int main(){
    int num[] = {9,4,7,3,10,14,11,21};
    int key;
    cout<<"Enter the key you are looking for: ";
    cin >> key;

    //declaration of a pointer for a function
    int (*fp)(int, int[], int);
    fp = fun;
    int index = fp(key,num,sizeof(num)/sizeof(num[1]));
    if(index > (sizeof(num)/sizeof(num[1]))){
        cout<<"The key was not found"<<endl;
    }else cout<<"Key was found at index "<<index<<endl;

    return 0;
}