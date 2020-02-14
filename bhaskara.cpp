#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	/* Solicitar 3 valores inteiros para o cálculo da equação de segundo grau, 
     
    BHASKARA
     DELTA =(b*b) - 4.a.c

Se Delta < 0 ' não existem raízes reais

Se Delta  = 0 ' existe uma raízes real

Se Delta  > 0  ' existem duas raízes reais

Raízes = -b +- raiz de delta /2.a */
   
   float a, b, c,DELTA;
   
   cout<<"Programa q calcula raiz de bhaskara \n";
   cout<<"Formula =  DELTA =(b*b) - 4.a.c \n";
   cout<<"Digite o valor de 'b' : \n";
   cin>>b;
   cout<<"Digite o valor para 'a' : \n";
   cin>>a;
   cout<<"Digite o valor para 'c' : \n";
   cin>>c;
   
   DELTA= (b*b) -4 *a*c;
   
   cout<<"O DELTA eh : "<<DELTA <<"\n";
   
   if (DELTA < 0 ){
   	      cout<<"Nao existem raizes reais \n";
   }
  else if(DELTA == 0){
   		 	cout<<"Existe uma raiz real\n";
			}
    else {
			cout<<"Existem duas raizes reais \n";
			 	}
			 			 	
			


	return 0;
}
