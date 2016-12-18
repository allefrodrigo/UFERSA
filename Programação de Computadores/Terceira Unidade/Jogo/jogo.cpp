#include "biblioteca.h"
const int TamVet = 32;


int main() {
	setlocale(LC_ALL, "portuguese"); //Fazendo com que o programa reconheça acentuação. 

	int contador = 0;
	cartasTrunfo cartas;

	ifstream inFile;
	inFile.open("trunfo.dat", ios_base::in | ios_base::binary); //A primeira abertura servirá apenas para contar a quantidade de cartas presente no baralho.
	if (!inFile.is_open()) {
		cout << "Erro ao abrir o arquivo trunfo.dat" << endl;
		cout << "Verifique se ele está na pasta adequeada" << endl;
		system("pause");
		exit(EXIT_FAILURE); //Caso o arquivo não tenha sido aberto o programa apresentará um erro.
	}

	else {
		while (inFile.read((char*)&cartas, sizeof(cartasTrunfo))) { //While feito para criar o contador, cada vez que leu conta-se +1 para a variavel contador.
			contador++;
		}
		inFile.close(); //Fechando o arquivo.

		inFile.open("trunfo.dat", ios_base::in | ios_base::binary); //Abrindo o arquivo novamente, desta vez para pegar os dados do arquivo.
		cartasTrunfo * carta = new cartasTrunfo[contador]; //O contador serve para criar um vetor dinâmico do tamanho da quantidade de cartas encontrada.
		if (contador > 0) {
			for (int i = 0; i < contador; i++) {
				inFile.read((char*)&carta[i], sizeof(cartasTrunfo)); //Passando os valores do arquivo para um vetor dinâmico.
			}
			inFile.close();

		}
		else { //Caso contador seja =< 0 o programa irá apresentar um erro. 
			cout << "Erro!\a" << endl;
			cout << "Nenhuma carta cadastrada!" << endl;
			cout << "Favor abrir o Gerador de Cartas" << endl;
		}
		cout << "Super Trunfo Planetas do Sistema Solar" << endl; //Inicio do jogo.
		linhas(15);
		char escolha;
		int atributo;
		int randomico;
		cartasTrunfo jogador1[4]; //Criando um espaço de 4 cartas para os jogadores.
		cartasTrunfo jogador2[4];
		char nomeJogador_1[15], nomeJogador_2[15];
		cout << "Bem vindo!" << endl;
		cout << "Deseja iniciar nova partida? [S/N] ";
		cin >> escolha;
		if (escolha == 'N' || escolha == 'n') {
			cout << "Obrigado por Jogar " << endl;
			system("pause");
			exit(EXIT_SUCCESS);
		}
		system("cls");
		do {
			cout << "Jogador 1: ";
			cin >> nomeJogador_1;
			cout << "Jogador 2: ";
			cin >> nomeJogador_2;
			linhas(5);
			cout << endl;
			for (int j = 0; j < 4; j++) { //Atribuindo cartas ao jogador 1.
				randomico = rand() % (contador); //A variavel randomico recebe um valor aleatório dado pela função rand que vai até o número máximo de cartas.
				jogador1[j] = carta[randomico]; //O vetor na posição j é atribuido ao valor na posição randomica.
			}
			for (int x = 0; x < 4; x++) { //Atribuindo cartas ao jogador 2.
				randomico = rand() % (contador);
				jogador2[x] = carta[randomico];
			}
			int ptsJogador1 = 0, ptsJogador2 = 0;
			for (int passador = 0; passador < 2; passador++) { //Este for irá definir a quantidade de jogadas, que serão no MAX 4.
				cout << "[" << nomeJogador_1 << "]" << endl << endl;  //Dentro deste for há 2 switchs, um para cada jogador. o contador passador deve ser menor que 2.
				cout << "Carta: " << jogador1[passador].nomePlaneta << " | Sistema Solar | Via Láctea " << endl; //Contando um total de 4 jogadas.
				menu();
				cout << "Escolha atributo [ ]\b\b";
				cin >> atributo;
				cout << endl;
				switch (atributo) { //Todos os cases do switch trabalham de mesma forma, utilizando if e else para realizar comparações entre os dados das cartas.
				case 1: { 
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].translacao << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].translacao << endl;
					if (jogador1[passador].translacao > jogador2[passador].translacao) { 
						ptsJogador1++;
					}
					else if (jogador1[passador].translacao < jogador2[passador].translacao) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 2: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].rotacao << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].rotacao << endl;
					if (jogador1[passador].rotacao > jogador2[passador].rotacao) {
						ptsJogador1++;
					}
					else if (jogador1[passador].rotacao < jogador2[passador].rotacao) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 3: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].distanciaSol << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].distanciaSol << endl;
					if (jogador1[passador].distanciaSol > jogador2[passador].distanciaSol) {
						ptsJogador1++;
					}
					else if (jogador1[passador].distanciaSol < jogador2[passador].distanciaSol) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 4: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].diametro << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].diametro << endl;
					if (jogador1[passador].diametro > jogador2[passador].diametro) {
						ptsJogador1++;
					}
					else if (jogador1[passador].diametro < jogador2[passador].diametro) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;

				}
				case 5: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].tempMed << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].tempMed << endl;
					if (jogador1[passador].tempMed > jogador2[passador].tempMed) {
						ptsJogador1++;
					}
					else if (jogador1[passador].tempMed < jogador2[passador].tempMed) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				default: {
					cout << "Invalido" << endl;
				}
				}
				cout << endl; //Fim da primeira jogada.
				cout << "Placar: " << nomeJogador_1 << ' ' << ptsJogador1 << " x " << ptsJogador2 << ' ' << nomeJogador_2 << endl;
				cout << endl;
				cout << "[" << nomeJogador_2 << "]" << endl << endl; //Inicio da segunda jogada.
				cout << "Carta: " << jogador2[passador].nomePlaneta << " | Sistema Solar | Via Láctea " << endl;
				menu();
				cout << "Escolha atributo [ ]\b\b"; 
				cin >> atributo;
				cout << endl; 
				switch (atributo) {  //Todos os cases do switch trabalham de mesma forma, utilizando if e else para realizar comparações entre os dados das cartas.
				case 1: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].translacao << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].translacao << endl;
					if (jogador1[passador].translacao > jogador2[passador].translacao) {
						ptsJogador1++;
					}
					else if (jogador1[passador].translacao < jogador2[passador].translacao) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 2: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].rotacao << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].rotacao << endl;
					if (jogador1[passador].rotacao > jogador2[passador].rotacao) {
						ptsJogador1++;
					}
					else if (jogador1[passador].rotacao < jogador2[passador].rotacao) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 3: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].distanciaSol << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].distanciaSol << endl;
					if (jogador1[passador].distanciaSol > jogador2[passador].distanciaSol) {
						ptsJogador1++;
					}
					else if (jogador1[passador].distanciaSol < jogador2[passador].distanciaSol) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				case 4: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].diametro << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].diametro << endl;
					if (jogador1[passador].diametro > jogador2[passador].diametro) {
						ptsJogador1++;
					}
					else if (jogador1[passador].diametro < jogador2[passador].diametro) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;

				}
				case 5: {
					cout << '[' << nomeJogador_1 << "] " << jogador1[passador].nomePlaneta << ' ' << jogador1[passador].tempMed << endl;
					cout << '[' << nomeJogador_2 << "] " << jogador2[passador].nomePlaneta << ' ' << jogador2[passador].tempMed << endl;
					if (jogador1[passador].tempMed > jogador2[passador].tempMed) {
						ptsJogador1++;
					}
					else if (jogador1[passador].tempMed < jogador2[passador].tempMed) {
						ptsJogador2++;
					}
					else
						cout << endl;
					break;
				}
				default: {
					cout << "Invalido" << endl;
				}
				}
				cout << "Placar: " << nomeJogador_1 << ' ' << ptsJogador1 << " x " << ptsJogador2 << ' ' << nomeJogador_2 << endl;
				system("pause");
			}
			cout << endl;
			cout << "Final: " << nomeJogador_1 << ' ' << ptsJogador1 << " x " << ptsJogador2 << ' ' << nomeJogador_2 << endl; //Ao termino de 4 jogadas o placar final será mostrado.
			cout << "Deseja iniciar nova partida? [S/N] ";
			cin >> escolha;
		} while (escolha != 'N' && escolha != 'n');
		cout << "Obrigado por Jogar " << endl;
		delete[] carta;
		system("Pause");
		return 0;
	}
}