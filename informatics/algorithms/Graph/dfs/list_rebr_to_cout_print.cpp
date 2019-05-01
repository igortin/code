#include <iostream>
#include <utility>
#include <set>

using namespace std;

void create_matrx_smejnost(int count, int a[100][100]){
	for (size_t i=0; i < count; ++i){
			for (size_t j = 0; j < count ; ++j){
					cin >> a[i][j];
				}
		}
}
void prinf_rebr(int count ,int a[100][100]){
	for (size_t i = 0; i < count; ++i) {
			for (size_t j = 0 ; j < count; ++j){
					if ( j > i && a[i][j] == 1) {
						cout << i + 1 << ' ';
						cout << j + 1 << '\n';
					}
			}
	}
}
int main() {
	int count;
	cin >> count;
	int a[100][100];
	create_matrx_smejnost(count, a);
	prinf_rebr(count, a);
	return 0;
}
