#include "bibliotecagerador.h"

void linhas(int x) {
	for (int i = 0; i < x; i++)
		cout << "-";
	cout << endl;
}

void cadastro(int * x, cartasTrunfo*vetor) { //Utilizando o contador para escrever os dados na posição correta.
	cout << "Cadastro Cartas" << endl;
	linhas(15);
	cout << "Nome do Planeta\t\t: ";
	cin >> vetor[*x].nomePlaneta;
	cout << "Translação\t\t: ";
	cin >> vetor[*x].translacao;
	cout << "Rotação\t\t\t: ";
	cin >> vetor[*x].rotacao;
	cout << "Distancia do Sol (KM)\t: ";
	cin >> vetor[*x].distanciaSol;
	cout << "Diametro\t\t: ";
	cin >> vetor[*x].diametro;
	cout << "Temp. Média\t\t: ";
	cin >> vetor[*x].tempMed;
	*x += 1;
	system("cls");

}

void atualizar(int*x, cartasTrunfo*vetor) {
	if (*x == 0) { //Se o contador for zero quer dizer que não há carta.
		cout << "Nenhuma carta cadastrada!\a\a" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Atualizar cartas" << endl;
		linhas(15);
		int contador = 1;
		for (int i = 0; i < *x; i++) {
			cout << contador << ") " << vetor[i].nomePlaneta << endl;
			contador++;
		}
		int escolha;
		cout << "Escolha a carta que deseja atualizar [_]\b\b";
		cin >> escolha;
		linhas(15);
		system("cls");
		cout << "Atualizando Carta - Planeta " << vetor[escolha - 1].nomePlaneta << endl; //Para acessar a posição correta devemos utilizar (escolha-1)
		linhas(15);
		cout << "Nome do Planeta\t\t: ";
		cin >> vetor[escolha - 1].nomePlaneta; //Através do escolha-1 podemos atualizar os dados daquele vetor em especifico.
		cout << "Translação\t\t: ";
		cin >> vetor[escolha - 1].translacao;
		cout << "Rotação\t\t\t: ";
		cin >> vetor[escolha - 1].rotacao;
		cout << "Distancia do Sol (KM)\t: ";
		cin >> vetor[escolha - 1].distanciaSol;
		cout << "Diametro\t\t: ";
		cin >> vetor[escolha - 1].diametro;
		cout << "Temp. Média\t\t: ";
		cin >> vetor[escolha - 1].tempMed;
		cout << "Carta atualizada! \a\a" << endl;
		system("pause");
	}
	system("cls");
}

void excluir(int*x, cartasTrunfo*vetor) {
	if (*x == 0) {
		cout << "Nenhuma carta cadastrada!\a\a" << endl;
		system("pause");
		system("cls");
	}

	else {
		cout << "Excluir Cartas" << endl;
		linhas(15);
		unsigned int contador = 1;
		for (int i = 0; i < *x; i++) {
			cout << contador << ") " << vetor[i].nomePlaneta << endl;
			contador++;
		}
		int escolha;
		cout << "Escolha a carta que deseja excluir [_]\b\b";
		cin >> escolha;
		if (*x == 1)
			*x -= 1;
		else {
			vetor[escolha - 1] = vetor[*x - 1]; //Para excluir eu coloco o valor da última posição no vetor que eu quero excluir.
			*x -= 1;
		}
		cout << "Carta excluida com sucesso! \b\b" << endl;
		system("pause");

	}
}

void listar(int*x, cartasTrunfo*vetor) {
	if (*x == 0) {
		cout << "Nenhuma carta cadastrada!\a\a" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "Cartas do Baralho" << endl;
		linhas(15);
		int cont = 1;
		for (int i = 0; i < *x; i++) {
			cout << '#' << i + 1 << ' ' << vetor[i].nomePlaneta << '\t' << vetor[i].translacao << '\t' << vetor[i].rotacao << '\t' << vetor[i].distanciaSol << '\t' << vetor[i].diametro << '\t' << vetor[i].tempMed << endl;
		}
		system("pause");
	}
	system("cls");

}