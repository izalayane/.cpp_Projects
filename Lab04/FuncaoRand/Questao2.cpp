#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int number;
	number = rand();

	cout << "The generated number is: " << number << endl;
	 
	if (number > 16834)
	{
		cout << "PEQUENO";

	}
	else
	{
		cout << "GRANDE";
	}
}