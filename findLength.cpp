//
// Created by chikamso on 2023-02-24.
//
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int len = 0;
    string str;
    cout<<"Enter a string ";
    getline(cin,str);
    cout<<str.length()<<endl;
    string::iterator it;
    for(it = str.begin(); it != str.end() ;it++){
        *it = *it - 32;
        len++;
    }
    cout<<str<<endl;
    cout<<len<<endl;
    //Changing from uppercase to lowercase
    for(it = str.begin(); it != str.end() ;it++){
        *it = *it + 32;
    }
    cout<<str<<endl;
    //Count number of Vowels, Consonant, Words
    int num_of_vowel = 0,num_of_consonants = 0,num_of_words = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str.at(i) == 'a'||str.at(i) == 'e'||str.at(i) == 'i'||str.at(i) == 'o'||str.at(i) == 'u'){
            num_of_vowel++;
        }else if(str[i] == ' '){
            num_of_words++;
        }else num_of_consonants++;
    }

    cout<<"Number of words are "<<num_of_words+1<<endl;
    cout<<"Number of vowels are "<<num_of_vowel<<endl;
    cout<<"Number of consonants are "<<num_of_consonants<<endl;

    return 0;
}
