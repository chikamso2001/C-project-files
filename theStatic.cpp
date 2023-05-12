//
// Created by chikamso on 2023-03-25.
//
#include <iostream>
using namespace std;
class theCars{
private:
    static int count;
public:
    theCars(){
        count++;
    }
    theCars(int num){
        count++;
    }
    static int getCount(){
        return count;
    }
};
int main(){
    theCars car1;
    cout<<"The current car count is "<<car1.getCount()<<endl;
    theCars car2(21);
    cout<<"The current car count is "<<car1.getCount()<<endl;

    return 0;
}
int theCars::count = 0;