//This is a program to demonstrate the addition of two numbers
#include <iostream>

int main(){
    unsigned int a, b, c;

    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin >> a >> b;
    c = a + b;
    std::cout<<"The result from the addition is: "<< c; 

    return 0;

}