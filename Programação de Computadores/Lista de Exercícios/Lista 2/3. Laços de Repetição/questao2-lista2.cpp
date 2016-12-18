#include <iostream>
using namespace std;

int main() {
	int num1[5];
	int num2[5];
	cout << "Informe Valores da Primeira Coluna: ";
	for (int i = 0; i < 5; i++) {
		cout << "A1" << i + 1 << ' ';
		cin >> num1[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << "A2" << i + 1 << ' ';
		cin >> num2[i];
	}
	int soma[5] = { 0 };
	cout << "Soma: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "a. linha.";
		soma[i] += num1[i] + num2[i];
		cout << num1[i] << "+" << num2[i] << '=' << soma[i] << endl;
	}
	system("pause");
	return 0;
}