//
// Created by chika on 2023-04-13.
//
// This program writes up a file with students details
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <random>
#include <utility>

class Student {
private:
    int id;
public:
    string name;
    string roll;
    int MATH;
    int PHY;
    int CHEM;
    Student() {
        cout << "This is an invaild student creation" << endl;
    }
    Student(string Name, string Roll, int mth=0, int phy=0, int chem=0);
    Student(Student& S);
    string getName() { return name; }
    string getRoll() { return roll; }
    int getPhy() { return PHY; }
    int getMth() { return MATH; }
    int getChem() { return CHEM; }
    int getId() { return id; }
    char getGrade(int num);
    void setName(string nam);
    void setScores(int mth, int phy, int chem);
    void setID();
    void setRoll(string roll);
};



int main() {
    string name;
    string roll;
    int PHY;
    int MTH;
    int CHM;
    string response;
    cout << "\t\t\t\t**************************WELCOME TO THE STUDENT DASHBOARD**************************" << endl;
    cout << "Would you like to create a new profile for a student" << endl;
    cin >> response;
    cin.ignore();
    if (response == "yes") {
        cout << "\nPlease enter the student's name:" << endl;
        getline(cin, name);
        cout << "\nEnter the roll of the student:" << endl;
        cin >> roll;
        cout << "Enter the student's score in math, physics and chemistry respectively" << endl;
        cin >> MTH >> PHY >> CHM;
    }
    else {
        cout << "THANK YOU AND HAVE A GOOD DAY..." << endl;
        return 0;
    }
    Student student1(name, roll, MTH, PHY, CHM);
    student1.setID();

    cout << "\n\t\t\tThe details will be saved in a text file" << endl;
    ofstream outFile("students.txt",ios_base::app);
    outFile << "Name: " << student1.getName() <<"  ID: "<<student1.getId()<< endl;
    outFile << "Roll: " << student1.getRoll() << endl;
    outFile << "SUBJECTS\t\t\t\tSCORES\t\t\t\tGRADES" << endl;
    outFile << "Mathematics\t\t\t\t" << student1.getMth() << "\t\t\t\t" << student1.getGrade(student1.getMth()) << endl;
    outFile << "Physics\t\t\t\t\t" << student1.getPhy() << "\t\t\t\t" << student1.getGrade(student1.getPhy()) << endl;
    outFile << "Chemistry\t\t\t\t" << student1.getChem() << "\t\t\t\t" << student1.getGrade(student1.getChem()) << endl;
    outFile<<" "<<endl;
    outFile.close();
    cout << "\n\n******************THE FILE HAS BEEN CLOSED AND SAVED**********************" << endl;
}

void Student::setName(string nam) {
    name = std::move(nam);
}
void Student::setID() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(131312,600000);
    id = dist6(rng);
}
void Student::setScores(int mth, int phy, int chem) {
    MATH = mth;
    PHY = phy;
    CHEM = chem;
}
void Student::setRoll(string Roll) {
    roll = Roll;
}
Student::Student(string Name, string Roll, int mth, int phy, int chem) {
    setName(Name);
    setRoll(Roll);
    setScores(mth, phy, chem);
}
Student::Student(Student& s) {
    s.setID();
    s.setName(name);
    s.setRoll(roll);
    s.setScores(MATH, PHY, CHEM);
}
char Student::getGrade(int score) {
    if (score >= 90) {
        return 'A';
    }
    else if (score >= 75) {
        return 'B';
    }
    else if (score >= 55) {
        return 'C';
    }
    return 'F';
}