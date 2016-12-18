#include <iostream>
using namespace std;
int absoluto(int);

int main() {
	cout << "Digite um valor: ";
	int valor;
	cin >> valor;
	cout << "O Valor absoluto eh " << absoluto(valor) << endl;
	system("pause");
	return 0;
}

int absoluto(int x) {
	return sqrt(pow(x, 2));
}