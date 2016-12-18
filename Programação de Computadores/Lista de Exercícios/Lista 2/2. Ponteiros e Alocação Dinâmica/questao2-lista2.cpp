#include <iostream>
using namespace std;

int main() {
	cout << "Informe nome do jogador/time ";
	char info[40];
	cin.get();
	cin.getline(info, 40);
	int espaco = 0;

	int cont = 0;
	while (info[cont] != '/') {
		if (info[cont] = ' ') {
			espaco++;
		}
		else
			cont++;
	}

	char * ptr = &info[cont + 1];
	cout << "Numero letras: " << cont << endl;
	cout << "Nome do time: " << ptr << endl;
	system("pause");
	return 0;
}