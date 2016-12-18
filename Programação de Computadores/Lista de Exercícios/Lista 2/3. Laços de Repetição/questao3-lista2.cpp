#include <iostream>
using namespace std;

int main() {
	int m[5][5] = {
		{ 1,2,3,6 },
		{ 2,6,3,7 },
		{ 5,4,2,3 },
		{ 10,8,0,5 }
	};
	int soma[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			soma[i] += m[j][i];
		}
	}
	cout << "Soma das colunas eh: ";
	for (int i = 0; i < 4; i++) {
		cout << soma[i] << ' ';
	}
	system("pause");
	return 0;
}
