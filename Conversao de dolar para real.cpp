#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	/* Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar. 
	O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário,
	 para que seja apresentado o valor em moeda brasileira. */
	 
	 float vreal, dolar,cota;
	 
	 cout<<"Coverter dolar em Real \n";
	 
	 cout<<"Digite o valor da cotacao do dolar \n";
	 cin>>cota;
	 
	 cout<<"Digite qtos dolares voce tem: \n";
	 cin>> dolar;
	 
	 vreal = dolar * cota;
	 
	 cout<<" Voce tem :  "<<vreal<<"  Reais \n";
	
	
	return 0;
}
