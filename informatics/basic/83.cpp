#include <iostream>
#include <set>
#include <stdio.h>
#include <algorithm>
#include <sstream>

#include <vector>
#include <typeinfo>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	string s; int count = 0;
  	set<int> vx,vk;
 
	stringstream ss;
  	int value;
    getline(cin,s);
    ss << s;
    while (ss) {
    ss>>value;
    vx.insert(value);}
    stringstream sa;        	
    getline(cin,s);
    sa << s;
    while (sa) {
    sa>>value;
    vk.insert(value);}

    vector<int> v_intersection;
    set_intersection(vx.begin(), vx.end(), vk.begin(), vk.end(), std::back_inserter(v_intersection));
    cout << v_intersection.size();
    return 0;}
