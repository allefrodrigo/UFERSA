#include <iostream>
using namespace std;

int main() {
	char um[40];
	char dois[40];
	char tres[40];
	char quatro[40];

	cout << "Digite 4 palavras: ";
	cin >> um >> dois >> tres >> quatro;
	int tamanhoVetor = strlen(um) + strlen(dois) + strlen(tres) + strlen(quatro);

	char * ponteiro = new char[tamanhoVetor];
	int j = 0;
	for (int i = 0; i < strlen(um); i++)
		ponteiro[j++] = um[i];
	for (int i = 0; i < strlen(dois); i++)
		ponteiro[j++] = dois[i];
	for (int i = 0; i < strlen(tres); i++)
		ponteiro[j++] = tres[i];
	for (int i = 0; i < strlen(quatro); i++)
		ponteiro[j++] = quatro[i];
	ponteiro[j] = '\0';
	cout << "Concatenando: " << endl;
	cout << ponteiro;
	system("pause");
	return 0;
}