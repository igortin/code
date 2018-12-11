#include <iostream>
#include <math.h> 
#include <stdio.h>
using namespace std;
int main(){

 	int a;
    cin >> a;
    int b = a + 1;
    int c = a - 1;
    printf("%s %d %s %d%s\n", "The next number for the number", a, "is", b , ".");
    printf("%s %d %s %d%s\n", "The previous number for the number", a, "is", c, ".");

    return 0; 
}