#include <iostream>
#include <cmath>
using namespace std;
double cilindro(double, double);
int main() {
	cout << "Calcula o volume de um cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	double raio, altura;
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	cout << fixed;
	cout.precision(3);
	cout << "O volume do cilindro eh " << cilindro(raio, altura) << endl;
	system("pause");
	return 0;
}

double cilindro(double r, double h) {
	const double pi = 3.14159;
	return pi*pow(r, 2)*h;
}