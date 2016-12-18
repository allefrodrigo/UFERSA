#include <iostream>
using namespace std;
double media(int, int);
int main() {
	cout << "Informe inteiro: ";
	int int2, int1;
	cin >> int1;
	cout << "Informe outro inteiro: ";
	cin >> int2;
	cout << "A media dos numeros eh " << media(int1, int2) << endl;
	system("pause");
	return 0;
}

double media(int x, int y) {
	return double((x + y) / 2.0);
}