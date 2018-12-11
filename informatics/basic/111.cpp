#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;
int main() {
    int S = 0; int N = 0; int W = 0; int E = 0; int x = 0; int y = 0;
    string napravlenie; int number; string s;
    ifstream fd("1.txt");


    while(!fd.eof()){ fd >> napravlenie >> number; 
        if ((int) napravlenie[0] == (int) 'S'){ y -= number; }
        else if ((int) napravlenie[0] == (int) 'N'){ y += number; }
        else if ((int) napravlenie[0] == (int) 'E'){ x += number; }
        else if ((int) napravlenie[0] == (int) 'W'){ x -= number; }
        napravlenie = ""; number = 0;
        }
    cout << x << " " << y << '\n'; 
    return 0;}