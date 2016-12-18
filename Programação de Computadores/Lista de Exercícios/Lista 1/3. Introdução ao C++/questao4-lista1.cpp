#include <iostream>
using namespace std;

int main() {
	cout << "Insira o peso (Kg)";
	double peso;
	cin >> peso;
	int pedala, ciclismo, nada;
	cout << "Insira tempo (pedada)";
	cin >> pedala;
	cout << "Insira tempo (ciclismo)";
	cin >> ciclismo;
	cout << "Insira tempo (nada)";
	cin >> nada;

	double METScorrida = 7.0, METSnat = 8.0;
	double energia1, energia2, energia3;
	energia1 = METScorrida*peso*(pedala / 60.f);
	energia2 = METScorrida*peso*(ciclismo / 60.f);
	energia3 = METSnat*peso*(nada / 60);
	cout << "Pedala = " << energia1 << endl;
	cout << "Ciclismo = " << energia2 << endl;
	cout << "Nada = " << energia3 << endl;
	system("pause");
	return 0;
}