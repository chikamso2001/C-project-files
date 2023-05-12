#include <iostream>
using namespace std;

int main(){
    int number;
    int number2;
    cout<<"Enter a number to count down from: ";
    cin >> number;
    number2 = number;

    //The for loop
    for(; number != 0; number--){
        cout<<number<<endl;
    }
    cout<<"Another loop"<<endl;
    //The while loop
    do{
        cout<<number2<<endl;
        number2--;
    }while(number2 > 0);

    return 0;
}