#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	/*Solicitar duas notas para o c�lculo da m�dia ,
	 mostrar a m�dia e se a m�dia for Maior ou igual a 6, mostrar "Aprovado", caso contr�rio mostrar "Reprovado". */
	 
	 float a,b,c;
	 
	 cout<<"Ler duas notas e mostrar a media se aprovado ou nao \n";
	 cout<<"Digite a primeira nota : \n";
	 cin>>a;
	 cout<<"Digite a segunda nota : \n";
	 cin>>b;
	 
	 c=(a+b) /2;
	 
	 cout<<"A media final eh :"<<c<<"\n";
	 
	 if (c >= 6){
	 
	 	cout<<"APROVADO!!! \n";
	 }
	 else {
	 	cout<<"REPROVADO!!! \n";
	 }
	 
	
	return 0;
}
