#include <iostream>
using namespace std;
struct datas {
	int dia, mes, ano;
};
int calculoVida(datas, datas);
int main() {
	datas nascimento, atual;
	cout << "Digite sua data de nascimento: ";
	cin >> nascimento.dia >> nascimento.mes >> nascimento.ano;
	cout << "Digite a data de hoje: ";
	cin >> atual.dia >> atual.mes >> atual.ano;
	cout << "Voce tem " << calculoVida(nascimento, atual) << " dias de vida." << endl;
	system("pause");
	return 0;
}

int calculoVida(datas nas, datas hoj) {
	const int diasAno = 365;
	const int diasMes = 31;
	int diasNasc = (nas.ano * diasAno) + (nas.mes * diasMes) + nas.dia;
	int diasAtual = (hoj.ano*diasAno) + (hoj.mes* diasMes) + hoj.dia;
	return diasAtual - diasNasc;
}

