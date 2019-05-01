#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
 	int n;
    cin >> n;
    div_t N;
    N = div(n, 2);
    int K = (N.quot * 2) + 2;
    printf("%d\n", K);
    return 0;
}
