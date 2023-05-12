#include <iostream>

int main(){
// This program will take in temperature values in Fahrenheit 
// output the temperature in celcius

    int temp, tempInCel;

    std::cout<<"Enter the temperature in fahrenheit: "<<std::endl;
    std::cin>>temp;
 
    tempInCel = ((temp - 32) * 5)/9;
   
    std::cout<<"temp is: "<< tempInCel; 
    return 0;
}