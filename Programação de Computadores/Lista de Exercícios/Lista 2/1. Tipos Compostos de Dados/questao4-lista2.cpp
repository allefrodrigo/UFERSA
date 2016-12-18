#include <iostream>
using namespace std;

struct informacoes {
	int dia, mes, ano;
	int hora, minuto;
};

struct evento {
	informacoes info;
	char desc[40];
};


int main() {
	cout << "Quantos eventos deseja cadastrar? ";
	int quantidade;
	cin >> quantidade;
	evento * vet = new evento[quantidade];
	for (int i = 0; i < quantidade; i++) {
		cout << '#' << i + 1 << endl;
		cout << "Data: ";
		cin >> vet[i].info.dia >> vet[i].info.mes >> vet[i].info.ano;
		cout << "Hora: ";
		cin >> vet[i].info.hora >> vet[i].info.minuto;
		cout << "Desc: ";
		cin.get();
		cin.getline(vet[i].desc, 40);
	}
	cout << "-------------------" << endl;
	cout << "Eventos Cadastrados" << endl;
	for (int i = 0; i < quantidade; i++) {

		cout << vet[i].info.dia << '/' << vet[i].info.mes << '/' << vet[i].info.ano << ' ' << vet[i].info.hora << ':' << vet[i].info.minuto << ' ' << vet[i].desc << endl;
	}
	system("pause");
	return 0;
}