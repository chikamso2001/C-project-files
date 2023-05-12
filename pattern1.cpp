#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<counter<<" ";
            counter += 1;
        }
        cout<<"\n";
    }
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"Another pattern"<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i + j >= 4 - 1) {
                cout << "*";
            }else cout<<" ";
        }
        cout<<"\n";
    }

}