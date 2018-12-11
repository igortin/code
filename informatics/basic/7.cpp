#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){

 	int n;
    cin >> n;
    div_t N = div(n,10); 
    printf("%d\n", N.quot);
    return 0;}