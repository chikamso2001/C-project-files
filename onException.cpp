#include <iostream>
using namespace std;
class myException:public exception{};
//create a function that divides
 int divide(int a, int b){
     if(b == 0){
         throw myException();
     }else
         return a/b;
 }
 int main(){
     int a;
     try{
         a = divide(560,0);
     }catch(myException e){
         cout<<"Division by zero is invalid"<<endl;
         return 0;
     }
     cout<<"The result from the division is "<<a<<endl;
 }