#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	div_t N;
	N = div(n, 3600);
	div_t NN;
	
	NN = div(N.rem, 60); 
	printf("%s %d %s %d %s\n", "It is",N.quot,"hours", NN.quot, "minutes.");
  	return 0;}