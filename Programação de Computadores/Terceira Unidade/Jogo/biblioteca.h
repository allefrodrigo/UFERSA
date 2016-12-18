#include <iostream>
#include <fstream>
#include <locale.h>
#include <windows.h>

using namespace std;
void linhas(int);
void menu();
struct cartasTrunfo {
	char nomePlaneta[20];
	int distanciaSol;
	float tempMed, translacao, rotacao, diametro;
};

