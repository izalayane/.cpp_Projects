//Utilize apenas uma instru��o cin para ler as tr�s informa��es abaixo para vari�veis diferentes.Multiplique o valor das vari�veis altura, largura e comprimento para achar o volume do cubo.
#include <iostream>
using namespace std;

int main () 
{
	double altura, largura, comprimento, volume;
	cout << "Digite a Altura, a Largura e o comprimento do Cubo: " << endl;
	cin >> altura >> largura >> comprimento;

		volume = (altura * largura * comprimento);

	cout << "O Volume do cubo e " << volume << "cm cubicos." << endl;
	
	return 0;

}