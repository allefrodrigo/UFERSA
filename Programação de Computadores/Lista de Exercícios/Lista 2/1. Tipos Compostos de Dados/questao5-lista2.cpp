#include <iostream>
using namespace std;

enum sem { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main() {
	char dias[7][20] =
	{
		"Domingo", "Segunda", "Terca", "Quarta", "Quinta","Sexta", "Sabado"
	};
	for (sem ini = DOM; ini <= SAB; ini = sem(ini + 1)) {
		cout << dias[ini] << endl;
	}
	system("pause");
	return 0;

}