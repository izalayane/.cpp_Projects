// crie um programa que use srand(1) da Bibliotecs cstdlib, e em seguida exiba o resultado a cinco chamadas da fun��o rand(). Execute o programa v�rias vezes.
#include <iostream> // Biblioteca com fun��es de entrada e saida de dados
#include <cstdlib>
using namespace std;

int main() {

	srand(1); //O 1 significa o valor inicial da semente que gerar� valores seguintes.Pseudoalet�rio->Se repetir da igual

	cout << rand() << endl;
	cout << rand() << endl;
}

// Resposta: O resultado obtido � o mesmo a menos que o valor do par�metro do srand seja mudado. Isto �, o valor da semente inicial que � respons�vel por gerar valores pseudoaleat�rios.
