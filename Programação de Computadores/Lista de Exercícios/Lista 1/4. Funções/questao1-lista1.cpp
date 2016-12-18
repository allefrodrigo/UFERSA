#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Informe o angulo";
	double angulo;
	cout << fixed;
	cout.precision(10);
	cin >> angulo;
	cout << "Seno " << sin(angulo);
	system("pause");
	return 0;
}