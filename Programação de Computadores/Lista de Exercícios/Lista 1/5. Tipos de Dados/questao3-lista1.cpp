#include <iostream>
using namespace std;

void calculoViagem(unsigned int, unsigned int, unsigned int, unsigned int);
int absoluto(int, int);

int main() {
	cout << "Horario de partida (HH:MM):  ";
	int horas1, min1;
	cin >> horas1 >> min1;
	cout << "Horario de chegada (HH:MM): ";
	int horas2, min2;
	cin >> horas2 >> min2;
	calculoViagem(horas1, min1, horas2, min2);
	system("pause");
	return 0;
}

int absoluto(int x, int y) {
	return int(sqrt(pow((x - y), 2)));
}
void calculoViagem(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) {

	int horas = absoluto(x1, x2) - 1;
	int  minutos = absoluto(y1, y2);
	cout << "O tempo total de viagem foi " << horas << ':' << minutos << endl;

}

