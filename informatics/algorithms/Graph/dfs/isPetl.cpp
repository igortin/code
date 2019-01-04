#include <iostream>
#include <algorithm>
#include <set>

using namespace std;





bool isMatrixSmegnost(int count, int a[100][100]){
	bool r = 0;
	for (size_t i = 0; i < count; ++i) //------------------------------------------------------------
	{
		for (size_t j = 0 ; j < count; ++j) //------------------------------------------------------------
				{
					if (i == j && a[i][j] == 1) { r = 1; break; }
				}
		if (r) break;
		}
		return r;
	}

int main() {
	int count;
	cin >> count;
	int a[100][100];
	for (size_t i=0; i < count; ++i) //----------------------------------------------------------------------------------------------------------------------------------------------------
		{ for (size_t j = 0; j < count ; ++j) //--------------------------------------------------------------------------------------------------------------------------------------------------------
				{
					cin >> a[i][j];
				}
		}





		if ( isMatrixSmegnost(count, a) == 0 ) {cout << "NO" <<'\n';}
		else {cout << "YES" <<'\n';}
	return 0;}
