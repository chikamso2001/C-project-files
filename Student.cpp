//
// Created by chikamso on 2023-03-07.
//
/*
 * Write a class for students with
 * 1. Roll
 * 2. Name
 * 3. Marks in 3 subject
 * functions for Total marks Grade and required methods
 */
#include <iostream>
#include <utility>
using namespace std;
class Student{
    string roll;
    string name;
    int PHY{};
    int MTH{};
    int CHEM{};
public:
    Student(string roll, string name, int PHY, int MTH, int CHEM);
    Student(Student &Student);//copy constructor

    void setScore(int phy, int mth, int chem);
    void setName(string name);
    void setRoll(string roll);

    string getName(){return name;}
    string getRoll(){return roll;}
    void getGrade() const;
    void getScore() const;
    [[nodiscard]] int getTotal() const;
    static char gradeScore(int num){
        if(num >= 90){
            return 'A';
        }else if(num >= 70){
            return 'B';
        }else if(num >= 60){
            return 'C';
        }else return 'F';
    }

};

int main(){
    cout<<"\t\t\t******************************Welcome to your account profile********************************\n\n\n"<<endl;
    cout<<"Follow the instructions to set up your profile."<<endl;
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    string roll;
    cout<<"\nEnter your role:";
    getline(cin,roll);
    int phy,chem,mth;
    cout<<"\nEnter your physics score: ";
    cin >> phy;
    cin.ignore();
    cout<<"\nEnter your chemistry score: ";
    cin >> chem;
    cin.ignore();
    cout<<"\nEnter your math score: ";
    cin >> mth;

    Student student1 = Student(roll,name,phy,mth,chem);
    cout<<"\nThe following is are your scores.\n"<<endl;
    student1.getScore();
    cout<<"\nBelow are the outlined grades\n"<<endl;
    student1.getGrade();



}

void Student::setName(string Name) {
    this->name = std::move(Name);
}
void Student::setRoll(string Roll) {
    this->roll = std::move(Roll);
}
void Student::setScore(int phy, int mth, int chem) {
    this->PHY = phy;
    this->MTH = mth;
    this->CHEM = chem;
}

Student::Student(string roll, string name, int PHY, int MTH, int CHEM) {
    setRoll(std::move(roll));
    setName(std::move(name));
    setScore(PHY,MTH,CHEM);
}
void Student::getScore() const {
   cout<<"Your score in Math is "<<this->MTH<<endl;
   cout<<"Your score in Physics is "<<this->PHY<<endl;
   cout<<"Your score in Chemistry is "<<this->CHEM<<endl;
}
void Student::getGrade() const {
    cout<<"Your grade in math "<<Student::gradeScore(this->MTH)<<endl;
    cout<<"Your grade in Physics "<<Student::gradeScore(this->PHY)<<endl;
    cout<<"Your grade in Chemistry "<<Student::gradeScore(this->CHEM)<<endl;
}
int Student::getTotal() const {
    return this->CHEM + this->PHY + this->MTH;
}

Student::Student(Student &Student) {
    Student.name = this->name;
    Student.CHEM = this->CHEM;
    Student.PHY = this->PHY;
    Student.MTH = this->MTH;
}
