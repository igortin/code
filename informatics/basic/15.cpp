#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int NN = n * 2;
	div_t N;
	N = div(NN, 60);
	printf("%s %d %s %d %s\n", "It is",N.quot,"hours", N.rem, "minutes.");
  return 0;
	}
