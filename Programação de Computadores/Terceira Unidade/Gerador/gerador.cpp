#include "bibliotecagerador.h"// Chamada da biblioteca.
using namespace std;
const int TamVet = 32; //Tamanho m�ximo de cartas. 

int main() {
	setlocale(LC_ALL, "portuguese"); //Fazendo com que o programa reconhe�a acentua��o. 
	cartasTrunfo vetorCartas[TamVet]; //Criando um registro de cartas, equivalendo a 32. Tamanho m�ximo de cartas.
	cartasTrunfo * ponteiro = vetorCartas; //Criando um ponteiro que aponta para um registro.
	int xCont = 0; //Este ser� o contador que ir� definir as posi��es a serem acessadadas
	int * contador = &xCont; //O ponteiro para o contador.
	char escolha;

	//Fun��o para leitura de arquivo
	ifstream inFile;
	inFile.open("trunfo.dat", ios_base::in | ios_base::app | ios_base::binary); //::app = gravar no final do arquivo, sem substituir o conteudo existente.


	if (inFile.is_open()) {
		while (inFile.read((char*)&vetorCartas[xCont], sizeof(cartasTrunfo))) //Conta quantas cartas h� no baralho.
			xCont += 1;
		inFile.close();
	}

	do {
		cout << "Gerador de Cartas" << endl;
		linhas(15);
		cout << "a) Cadastrar\n";
		cout << "b) Atualizar \n";
		cout << "c) Excluir \n";
		cout << "d) Listar \n";
		cout << "e) Sair\n";
		cout << "Escolha uma op��o: (_)\b\b";
		cin >> escolha;
		switch (escolha) {  //Inicio do switch, que ir� trabalhar de acordo com o a op��o informada pelo usu�rio.
		case 'a': case 'A':
			system("cls");
			cadastro(contador, ponteiro);
			system("cls");
			break;
		case 'b': case'B':
			system("cls");
			atualizar(contador, ponteiro);
			break;
		case 'c': case 'C':
			system("cls");
			excluir(contador, ponteiro);
			system("cls");
			break;
		case 'd': case 'D':
			system("cls");
			listar(contador, ponteiro);
			break;
		}


	} while (escolha != 'e' && escolha != 'E');

	if (xCont != 0) { //Se o n�mero de cartas for diferente de zero...
		ofstream outFile;
		outFile.open("trunfo.dat", ios_base::out | ios_base::binary);
		for (int j = 0; j < xCont; j++)
			outFile.write((char*)&vetorCartas[j], sizeof(cartasTrunfo)); //Todo o valor passado para o vetorCartas ser� escrito em trunfo.dat
		outFile.close();
	}

	cout << "Encerrando Gerador de Cartas" << endl;
	system("pause");
	return 0;
}