// Escreva um programa que crie uma variável inteira chamada medida. Atribua o valor 10 para esta variável.Calcule e exiba o valor de 2 vezes medida e de medida ao quadrado. Use apenas uma variável.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int medida;

	medida = 10;
	cout << "Medida: " << medida << "\n2x Medida: " << medida * 2 << "\nMedida ao quadrado: " << pow(medida, 2);

}
