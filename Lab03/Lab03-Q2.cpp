// Utilize instru��es cin para ler o valor de horas e minutos para vari�veis diferentes. o separador �:� pode ser lido para uma vari�vel do tipo char
#include <iostream>
using namespace std;

int main() {

	int horas, minutos;
	char ponto;

	cout << "Que horas sao?\n ";
	cin >> horas >> ponto >> minutos;

	cout << horas << " horas\n" << minutos << " minutos";

		return 0;
}