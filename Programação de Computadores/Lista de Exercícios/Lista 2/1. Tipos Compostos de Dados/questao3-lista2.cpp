#include <iostream>
using namespace std;
union jogador {
	char nome[25];
	int numero;
};

struct gol {
	jogador jog;
	int hora, min;
};

int main() {
	cout << "Quantos gols voce vai cadastrar? ";
	int quantidade;
	cin >> quantidade;
	gol * vet = new gol[quantidade];
	for (int i = 0; i < quantidade; i++) {
		cout << "Jogador: ";
		cin >> vet[i].jog.nome;
	}
	delete[] vet;

	return 0;
}