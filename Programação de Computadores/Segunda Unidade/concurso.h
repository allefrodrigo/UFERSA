#include <iostream>
using namespace std;

struct horario {
	int hora;
	int minuto;
};
struct questions {
	int dificuldade;
	horario inicio;
	horario fim;
};

struct stats {
	float dif_Med;
	float temp_Med;
};

void linhaGrossa(int);
void linhaFina(int);
int func_Calc(horario, horario);