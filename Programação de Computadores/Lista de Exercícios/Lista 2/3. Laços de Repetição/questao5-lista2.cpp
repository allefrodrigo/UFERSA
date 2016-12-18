#include <iostream>
using namespace std;

int main() {
	cout << "Numeros inteiros: (0 para finalizar) ";
	int numeros;
	int soma = 0;
	int contador = 0;
	double media;
	cin >> numeros;
	while (numeros != 0) {
		soma += numeros;
		contador++;
		cin >> numeros;
	}

	cout << "A soma dos numeros: " << soma << endl;
	cout << "Numeros lidos: " << contador << endl;
	media = (double(soma) / double(contador));
	cout << "Media" << media << endl;
	system("pause");
	return 0;
}