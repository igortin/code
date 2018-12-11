#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;
struct Student {
    string familia; 
    string name; 
    double bs;
};
vector<Student> st;
void append_student_p(string familia, string name, double mathematics, double phisics, double informatics){
    Student s; 
    s.familia = familia; 
    s.name = name; 
    s.bs = (mathematics + phisics +informatics) / 3; // 777.777777777777 ;
    st.push_back(s);
    }
int main(){
    double mathematics, phisics, informatics; int n; 
    string familia, name;
    Student s; int k = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){ cin >> familia; cin >> name ; cin >> mathematics ; cin >> phisics; cin >> informatics;
        append_student_p(familia, name, mathematics, phisics, informatics);}
    double val_0 = -1 , val_1 = -1, val_2 = -1;
    for (int i = 0; i < st.size(); ++i) {
        if (val_2 < st[i].bs){
             val_0 = val_1;
             val_1 = val_2; 
             val_2 = st[i].bs;
         }


        else if (val_1 < st[i].bs){
            val_0 = val_1;
            val_1 = st[i].bs;
        }
        




        else if (val_0 < st[i].bs){
            val_0 = st[i].bs;}
        }


    for (int i = 0; i < st.size(); ++i) { //cout << val_2 << val_1 << val_0 << '\n'; 
        if ( st[i].bs == val_2 or st[i].bs == val_1 or st[i].bs == val_0) {
         cout << st[i].familia << " " << st[i].name <<'\n';}    
} return 0; }