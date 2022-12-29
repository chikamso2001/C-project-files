#include <iostream>
using namespace std;

int main(){
    float TempInFah;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin >> TempInFah;
    float TempInCel = (float)5 * (TempInFah - 32)/9;
    cout<<"The temperature in celcius is "<<TempInCel;
    return 0;
}