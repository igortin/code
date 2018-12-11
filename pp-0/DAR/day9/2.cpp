#include <iostream>
#include <vector>

using namespace std;

struct student{
    string name;
    double gpa;
    int course;
    void printInfo(){
        cout << name << " " << gpa << " " << course << endl;
    }
};

bool f(student l, student r){
    if(l.gpa < r.gpa) return false;
    else if (l.gpa == r.gpa){
        if(l.name < r.name) return false;
    } 
    return true;
}

int main(){

    vector<student> v;

    student s;
    s.name = "A";
    s.gpa = 3.5;
    s.course = 3;

    student s2;
    s2.name = "B";
    s2.gpa = 3.8;
    s2.course = 2;

    student s3;
    s3.name = "C";
    s3.gpa = 3.8;
    s3.course = 2;

    //v.push_back(s);
    v.push_back(s2);
    v.push_back(s3);

    for(int i = 0; i < v.size(); ++i){
        v[i].printInfo();
    }

    cout << "=========" << endl;

    sort(v.begin(),v.end(),f);

    for(int i = 0; i < v.size(); ++i){
        v[i].printInfo();
    }

    return 0;
}