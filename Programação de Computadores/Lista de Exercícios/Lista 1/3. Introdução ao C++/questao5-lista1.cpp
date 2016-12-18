#include <iostream>
using namespace std;

int main() {
	cout << "Custo de Fabrica: ";
	double precofab;
	double perVendedor = 0.28f;
	double impostos = 0.45f;
	cin >> precofab;
	cout << fixed;
	cout.precision(2);
	cout << "Preco do Carro R$ ";
	cout << precofab << endl;
	cout << "Preco com Impostos (45%) R$ ";
	cout << (precofab*impostos) + precofab << endl;
	cout << "Valor Distribuidor (28%): R$ ";
	cout << precofab*perVendedor << endl;
	double soma = precofab + ((precofab*impostos) + (precofab*perVendedor));
	cout << "Valor final: R$ " << soma << endl;
	system("pause");
	return 0;
}