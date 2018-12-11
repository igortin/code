#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){

 	int n;
    cin >> n;
    div_t N = div(n,100); 
    div_t N1 = div(N.rem, 10);
    printf("%d\n", N.quot + N1.quot + N1.rem);
    return 0;}