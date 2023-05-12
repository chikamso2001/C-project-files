//
// Created by chikamso on 2023-02-21.
//
#include <cstring>
#include <iostream>
using namespace std;
 int main(){
     char a[10];
     char s[50];
     char m[30];
     cout<<"Please enter your name: ";
     cin.getline(s,50);
     cout<<"Your name is "<<s<<endl;
     //The concatentation
     cout<<"Please enter your middle name: ";
     cin.getline(m,30);
     strncat(s,m,30);//This is a concatenation method
     cout<<s<<endl;
     strncpy(s,a,7);//This is for copying from one variable to another

     //Creating a string with Char array
     char n[15] = {'H','E','L','L','O','\0','K','A','M','S','O','\0'};
     cout<<n<<endl;
     //Checking for the sub string in a string
    char s1[20] = "programming";
    if(strrchr(s1,'m') != nullptr){
        cout<<strrchr(s1,'m')<<endl;
    }else cout<<"NOT FOUND"<<endl;

    //Using the tokens
    char* num1 = "123";
    char* num2 = "341.97";
    long int Num1 = strtol(num1,nullptr,10);//Converting from char to long int
    float Num2 = strtof(num2,nullptr);//Converting char into float
    cout<<Num1<<endl<<Num2<<endl;

    char* nums ="x = 20; y = 7; z = 16";
    cout<<strtok(nums,";")<<endl;
    //Try looping through the token
    while(nums != nullptr){
        cout<<nums<<endl;
        nums = strtok(nullptr,";");
    }

    return 0;
 }
