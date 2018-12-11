#include <iostream>

using namespace std;

struct student{
    string name;
    double gpa;
    int course;
    void printInfo(){
        cout << name << " " << gpa << " " << course << endl;
    }
};

int main(){

    student s;
    s.name = "ABC";
    s.gpa = 3.5;
    s.course = 3;

    student s2;
    s2.name = "AABC";
    s2.gpa = 3.8;
    s2.course = 2;

    //cout << s.name << " " << s.gpa << endl; 
    s.printInfo();
    s2.printInfo();

    return 0;
}