#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/*Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: 
VOLUME <-- 3.14159 * RAIO2  * ALTURA.       */

float volume,altura,raio;

cout<<"Calcular e apresentar o valor do volume de uma lata de oleo \n";

cout<< "Digite a altura da lata de oleo : \n ";
cin>>altura;

cout<< "Digite o raio de base da lata de oleo : \n";
cin>>raio;

volume= 3.14159* (raio*raio) *altura;

cout<<"O volume da lata de oleo acima eh:    "<<volume;

	
	
	return 0;
}
