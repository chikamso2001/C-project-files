//
// Created by chikamso on 2023-02-20.
//
#include <iostream>
using namespace std;
int main(){
    // creating a pointer
    int num = 34;
    int *p = &num; //stores the address of the 'num' variable
    cout<<p<<" is the memory address of num"<<endl;
    //Accessing the heap memory of a computer
    int A[5] = {3,7,1,4,9};
    int *Q;
    Q = new int[5]; // This creates an array in the heap memory
    int *P = &A[0];
    int *Z = &A[3];
    Q[0] = 4;Q[1] = 6;Q[2] = 1;Q[3] = 9;Q[4] = 8;

    int *D = Q; //This points to the address of the first element in the array
    cout<<*D<<endl;


    //The arithmetics of pointers
    cout<<*P<<endl;
    cout<<*(P+1)<<endl;
    cout<<*(P+1)<<endl;
    cout<<*(P+3)<<endl;
    cout<<(Z-P)<<endl;

    delete []Q; //This will delete the array from the heap memory to avoid memory leak
    D = nullptr; //This avoids dangling pointers

    //Using the references
    int y = 10;
    int& x = y;
    cout<<&y<<" "<<&x<<endl; // 0xb2ad7ffbec 0xb2ad7ffbec They will have the same references

    return 0;
}
