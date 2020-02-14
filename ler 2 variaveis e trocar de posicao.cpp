#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
	/*Ler dois valores inteiros para as variáveis A e B e efetuar a troca dos valores
	 de forma que a variável A passe a possuir o valor da variável B
	  e a variável B passe a possuir o valor da variável A.
	   Apresentar os valores trocados. */
	   
	   int a,b,c;
	   
	   cout<< " Ler 2 valores inteiros e trocar as variaveis \n";
	   cout<< "Digite o valor para a variavel A \n";
	   
	   cin>>a ;
	   
	   cout<< "Digite o valor para a variavel B \n";
	   cin>>b;
	   
	   cout<<" A variavel A vale:  "<<a;
	   cout<<"\n A variavel B vale:  "<<b;
	   
	   c=a;
	   a=b;
	   b=c;
	   
	   cout<< "\n A Variavel A agr vale: "<<a;
	   cout<<"\n A Variavel B agr vale: "<<b;
	   cout<<"\n";
	
	return 0;
}
