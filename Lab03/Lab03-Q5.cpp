// Escreva um programa que leia sua idade em anos e converta-a para dias. O programa deve exibir na tela ambos os valores.
#include <iostream>
using namespace std;

int main() {
	int idade;

	cout << "Digite sua idade: \n";
	cin >> idade;

	cout << idade << " anos equivale a " << idade * 364 << " dias \n";
}