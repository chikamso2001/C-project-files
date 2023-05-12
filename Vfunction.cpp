//
// Created by chikamso on 2023-03-22.
//
#include <iostream>
using namespace std;
class car{
private:
    bool accelerate;
    int speed;
public:
    car(int accel, int sp);
    static void brakes(){
        cout<<"Brakes have been applied"<<endl;
    }
    virtual void lowOnPower(){}
    void setSpeed(int speed);
    void setAccel(int accel);
    int getSpeed() const{return speed;}
    int getAccel()const{return accelerate;}
};
class electricCar:public car{
public:
    electricCar(int Speed, int Accel):car(Speed,Accel){

    }
    void lowOnPower() override{
        cout<<"Go to the recharge station"<<endl;
    }
};

int main(){
    car Toyota(10,200);
    cout<<"The speed of the Toyota is "<<Toyota.getSpeed()<<endl;
    Toyota.lowOnPower();
    Toyota.brakes();

    car *Tesla = new electricCar(19,300);
    cout<<"The speed of the Tesla is "<<Tesla->getSpeed()<<endl;
    Tesla->brakes();
    Tesla->lowOnPower();

    return 0;
}

void car::setSpeed(int Speed){
    this->speed = Speed;
}
void car::setAccel(int accel) {
    this->accelerate = accel;
}
car::car(int accel, int sp) {
    this->accelerate = accel;
    this->speed = sp;
}
