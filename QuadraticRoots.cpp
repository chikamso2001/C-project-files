#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, r1, r2;
    cout<<"Enter the coeffecient of the equation from highest power to the constant value: ";
    cin>>a>>b>>c;

 

    r1 = (float)(-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    r2 = (float)(-b - sqrt(pow(b,2) - 4*a*c))/(2*a);

    cout<<"The roots are "<< r1;
    cout<<" "<<r2;

    return 0;
}