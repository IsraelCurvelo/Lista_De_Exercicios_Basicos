#include <iostream>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	/* Receber valores de base e altura de um tri�ngulo e verificar se s�o valores v�lidos (positivos maiores que zero).
	 Em caso afirmativo, calcular a �rea do tri�ngulo.*/
	  
  float area, base , altura ;
  
  cout<<"Calcular area de um triangulo \n";
  cout<<"Digite o valor da base de um triangulo: \n";
  cin>>base;
  
  while (base<0){
  	cout<<"Redigite , digite um numero valido positivo! \n";
  	cin>>base;
  }
  
  cout<<"Digite a altura do triangulo: \n";
  cin>>altura;
  
 while (altura<0){
  	cout<<"Redigite , digite um numero valido positivo! \n";
  	cin>>altura;
  }
  
  area =(base * altura ) /2 ;
  
  cout<<"A Area do triangulo eh : " <<area <<" m�";
  
   


	return 0;
}
