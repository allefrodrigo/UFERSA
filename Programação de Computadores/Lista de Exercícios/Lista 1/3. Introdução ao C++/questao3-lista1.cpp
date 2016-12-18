#include <iostream>
using namespace std;

int main() {
	cout << "Quantos anos você fuma: ";
	int anos;
	cin >> anos;
	cout << "Quantos cigarros voce fuma dia";
	int cig;
	cin >> cig;
	cout << "Qual o preco medio: ";
	float preco;
	cin >> preco;
	int totalcigarros = (anos * 365) * cig;
	float totalcarteira = totalcigarros / 20.f;
	float total = totalcarteira * preco;
	cout << "Voce gasto ate agora R$ " << total << " com cigarros.";
	system("pause");
	return 0;

}