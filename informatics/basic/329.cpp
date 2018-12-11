#include <iostream>
#include<vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;
struct Student{
    string familia; 
    string name; 
    int mathematics; 
    int phisics; 
    int informatics;
    void printInfo(){ cout << mathematics << " " << phisics << " " << informatics <<  '\n';}};

vector<Student> st;
void append_student_list(string familia, string name, int mathematics, int phisics, int informatics){
    Student s,winner; 
    s.familia = familia; 
    s.name = name; 
    s.mathematics = mathematics; 
    s.phisics = phisics; 
    s.informatics = informatics; 
    st.push_back(s);
}
int main(){
    int mathematics, phisics, informatics, n; double tempw, w = 0; 
    string familia, name; 
    Student s;
    cin >> n;
    for (int i = 0; i < n; ++i){ 
        cin >> familia; cin >> name; cin >> mathematics; cin >> phisics; cin >> informatics;
        
        tempw = (mathematics + phisics + informatics); 
        if (w < tempw){ w = tempw; st.clear(); append_student_list(familia, name, mathematics, phisics, informatics);}
        else if (w == tempw) { append_student_list(familia, name, mathematics, phisics, informatics);}}
for (int i = 0; i < st.size(); ++i){ 
    cout << st[i].familia << ' ' << st[i].name << '\n';}
return 0;}