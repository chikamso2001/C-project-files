#include <iostream>
using namespace std;
int main(){

    float basicSalary, perOfAllo, perOfDed, NetSalary;
    cout << "Please enter your basic salary: ";
    cin >> basicSalary;
    cout << " Enter your percentage for allowance: ";
    cin >> perOfAllo;
    cout << "Enter the percentage for deduction: ";
    cin >> perOfDed;

    NetSalary = (basicSalary +((perOfAllo/100)*basicSalary)) - ((perOfDed/100)*basicSalary);

    cout << "Your net salarys is "<<NetSalary<<endl;
    return 0;
}