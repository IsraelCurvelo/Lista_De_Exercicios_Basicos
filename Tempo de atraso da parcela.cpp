#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	//. Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula
   // PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)

float valor, taxa;
int tempo, prest;

cout<<"Apresentar valor da parcela em atraso \n";
cout<< "Digite o valor da prestacao \n";
cin>>valor;

cout<<"Digite em dias qual o tempo de atraso \n";
cin>>tempo;

cout<<"Digite o valor da taxa \n";
cin>>taxa;

prest =valor+(valor*(taxa/100)*tempo);

cout<<" O valor total da prestacao em atraso esta em : "<<prest<< " reais";
	return 0;
}
