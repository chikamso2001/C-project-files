#include<iostream>
#include <fstream>
#include <random>

using namespace std;
class MyStudent{
private:
    int id;
    string name;
    string Roll;
    int MTH;
    int CHEM;
    int PHY;
public:
    MyStudent(){
        cout<<"This is an invalid student profile creation"<<endl;
    };
    MyStudent(int Id,string Name, string roll, int mth, int chem, int phy);
    MyStudent(MyStudent &student);
    void setName(string Name);
    void setRoll(string roll);
    void setScores(int mth, int chem, int phy);
    void setId(int Id);
    string getName(){return name;}
    string getRoll(){return Roll;}
    int getId(){return id;}
    int getMth(){return MTH;}
    int getChem(){return CHEM;}
    int getPhy(){return PHY;}
    char getGrade(int num);
    //~MyStudent();
};
string name;
string rol;
int theId;
int math_score;
int chem_score;
int phy_score;
int main(){
    string response;
    cout<<"***************************************Teacher's Dashboard****************************************"<<endl;
    cout<<"Welcome to the Dashboard\n"<<endl;
    cout<<"Would you like to update the info of your student"<<endl;
    cin >> response;
    try{
        if(response == "yes"){
            cout<<"\nEnter the full name of the student"<<endl;
            getline(cin,name);
            cin.ignore();
            cout<<"\nEnter the roll of the student"<<endl;
            getline(cin,rol);
            cin.ignore();
            cout<<"Enter the scores in physics, chemistry and math respectively"<<endl;
            cin >> phy_score >> chem_score >> math_score;
            cin.ignore();
            MyStudent student;
            std::random_device dev;
            std::mt19937 rng(dev());
            std::uniform_int_distribution<std::mt19937::result_type> dist6(131312,600000);
            theId = dist6(rng);
            student.setScores(math_score,chem_score,phy_score);
            student.setName(name); student.setRoll(rol); student.setId(theId);
            ofstream outFile("student profile.txt",ios::app);
            outFile<<student.getName()<<" "<<student.getId()<<endl;
            outFile<<"Student Roll "<<student.getRoll()<<endl;
            outFile<<"*******SCORE & GRADES********"<<endl;
            outFile<<"Mathematics: "<<student.getMth()<<" "<<student.getGrade(student.getMth())<<endl;
            outFile<<"Physics: "<<student.getPhy()<<" "<<student.getGrade(student.getPhy())<<endl;
            outFile<<"Chemistry: "<<student.getChem()<<" "<<student.getGrade(student.getChem())<<endl;
            outFile.close();
        }else if(response == "no"){
            throw("end");
        }else throw(1);
    }
    catch(string e){
        cout<<"Thank you. System has been closed....\n"<<endl;
        cout<<"Press enter to exit"<<endl;
        cin.ignore();
        return 0;
    }
    catch(...){
        cout<<"You entered an invalid input...System has been abruptly ended."<<endl;
        return 0;
    }
}

MyStudent::MyStudent(int Id, string Name, string roll, int mth, int chem, int phy) {
    this->id = Id; this->name = Name; this->Roll = roll; this->MTH = mth; this->CHEM = chem; this->PHY = phy;
}
MyStudent::MyStudent(MyStudent &student) {
    student.setName(name);
    student.setRoll(Roll);
    student.id = id;
    student.setScores(MTH,CHEM,PHY);
}

void MyStudent::setName(string Name) {
    this->name = Name;
}
void MyStudent::setRoll(string roll) {
    this->Roll = roll;
}
void MyStudent::setId(int Id){
    this->id = Id;
}
void MyStudent::setScores(int mth, int chem, int phy) {
    this->MTH = mth; this->CHEM = chem; this->PHY = phy;
}
char MyStudent::getGrade(int num) {
    if(num >= 90){
        return 'A';
    }
    else if(num >= 70){
        return 'B';
    }
    else if(num >= 55){
        return 'C';
    }
    return 'F';
}

