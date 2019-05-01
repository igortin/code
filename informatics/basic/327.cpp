 #include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;

struct Student{
    double mathematic;
    double phisic;
    double informatic;
    void printInfo(){
      cout << mathematic << phisic << informatic  << '\n';
    }
};

vector<Student> v;
void nv(double mathematic, double phisic, double informatic){
    Student s;
    s.mathematic = mathematic;
    s.phisic = phisic;
    s.informatic = informatic;
    v.push_back(s);
  }
int main(){
    double mathematic, phisic, informatic, n;
    Student s;
    string name, lname;
    double m,p,no;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> lname;
        cin >> name;
        cin >> mathematic;
        cin>> phisic,
        cin >> informatic;
        if ( 1 < mathematic > 5 or 1 < phisic > 5 or 1 < informatic > 5) {continue;}
        nv(mathematic,phisic,informatic);
    }
    for (int i =0 ; i < v.size(); ++i) {
      m +=v[i].mathematic;
      p += v[i].phisic ;
      no += v[i].informatic;
    }

    cout << m/v.size() << ' ' ;
    cout << p/v.size() << ' ';
    cout << no/v.size() << '\n';


    return 0;
  }
