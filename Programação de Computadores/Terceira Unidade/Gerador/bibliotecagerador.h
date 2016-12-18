#include <iostream>
#include <fstream>
#include <locale.h>
#include <windows.h>

using namespace std;
void linhas(int);

struct cartasTrunfo {
	char nomePlaneta[20];
	int distanciaSol;
	float tempMed, translacao, rotacao, diametro;
};

void cadastro(int*, cartasTrunfo*);
void atualizar(int*, cartasTrunfo*);
void excluir(int*, cartasTrunfo*);
void listar(int*, cartasTrunfo*);
