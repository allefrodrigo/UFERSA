#include <iostream>
using namespace std;

int main() {
	cout << "Digite um numero real: ";
	double real;
	cin >> real;
	cout << "Parta inteira: " << int(real) << endl;
	cout << "Parte fracionaria: " << real - int(real) << endl;
	system("pause");
	return 0;
}