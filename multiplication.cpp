#include <iostream>
using namespace std;
int number;
int main(){
    cout<<"Enter a number: ";
    cin >> number;
    for(int i = 1; i < 11; i++){
        cout<<number<<" * "<<i<<" = "<<number * i<<endl;
    }
    return 0;
}