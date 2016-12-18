#include <iostream>
using namespace std;

int main() {
	cout << "Entre com distancia em metros: ";
	int metros;
	cin >> metros;
	int km = (metros / 1000);
	cout << metros << " metros equivalem a " << km << " km e " << metros - (km * 1000) << " metros" << endl;
	system("pause");
	return 0;
}