//
// Created by chikamso on 2023-03-26.
//
#include <iostream>
using namespace std;

class Fraction{
    int a, b;
public:
    Fraction(){
        a = 1;
        b = 1;
    }
    Fraction(int A, int B);
    friend Fraction operator+(Fraction C1, Fraction C2);
    friend ostream & operator <<(ostream &out, Fraction C);
};

int main(){
    int num, den;
    int num1, den1;
    cout<<"Enter the numerator and denominator of the fraction"<<endl;
    cin >> num >>den;
    cout<<"Enter the numerator and denominator of the fraction"<<endl;
    cin >> num1 >> den1;
  
}

Fraction::Fraction(int A, int B = 1){
    try{
        if(B == 0){
            throw 1;
        }
        else b = B;
    }catch(int e){
        cout<<"The division by zero is invalid"<<endl;
    }
    a = A;
}
Fraction operator+(Fraction C1, Fraction C2){
    Fraction temp;
    temp.a = (C1.a*C2.b) + (C2.a*C1.b);
    temp.b = C1.b*C2.b;
    return temp;
}

ostream & operator <<(ostream &out, Fraction C){
    out<<C.a<<"/"<<C.b<<endl;
    return out;
}
