#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std ;


int main(int argc, char** argv) {
	
	//Fa�a um programa que receba um n�mero e mostre o resto da divis�o por 6.
	
	
int  a,r;
	
	cout<<" Receber um numero e mostrar o resto da divisao por 6 \n";
	cout<<"Digite um numero: \n";
	cin>>a;
	
	cout<<"O numero digitado foi: "<<a <<"\n";
	
	r= a % 6 ;
	
	cout<<"O resto da divisaoo por 6 eh : "<<r;
	
	
	return 0;
}
