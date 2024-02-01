//Utilize apenas uma instrução cin para ler as três informações abaixo para variáveis diferentes.Multiplique o valor das variáveis altura, largura e comprimento para achar o volume do cubo.
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