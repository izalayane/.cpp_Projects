// Escreva uma fun��o Linha() que, usando um �nico cout e sem usar repeti��es ou saltos de linha, produza uma linha de tamanho fixo formada por 10 caracteres de h�fen.Escreva tamb�m uma fun��o Pequena(), Media() e Grande() que fa�am uso da fun��o Linha() e de saltos de linha para obter linhas com 10, 20 e 30 hifens respectivamente.O programa deve produzir a sa�da abaixo.A fun��o Linha() n�o deve ser chamada diretamente pela fun��o main(), apenas Pequena(), Media() e Grande() devem fazer uso dela.
#include <iostream>
using namespace std;

void Linha() {
	cout << "----------";
}

void Pequena() {
	Linha();
	cout << endl;
}

void Media() {
	Linha();
	Linha();
	cout << endl;
}

void Grande() {
	Linha();
	Linha();
	Linha();
	cout << endl;
}

int main() {
	Pequena();
	Media();
	Grande();
	cout << "Programacao de Computadores" << endl;
	Pequena();
	Media();
	Grande();
}