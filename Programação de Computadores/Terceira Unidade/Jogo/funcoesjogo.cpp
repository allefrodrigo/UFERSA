#include "biblioteca.h"

void linhas(int x) {
	for (int i = 0; i < x; i++)
		cout << "-";
	cout << endl;
}

void menu() {
	cout << "1) Transla��o: " << endl;
	cout << "2) Rota��o: " << endl;
	cout << "3) Distancia do Sol (KM): " << endl;
	cout << "4) Diametro: " << endl;
	cout << "5) Temp. M�dia: " << endl;
}
