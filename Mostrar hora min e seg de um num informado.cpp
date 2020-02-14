#include <iostream>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	/* Dado um número inteiro de segundos, mostrar a quantas horas, minutos e segundos ele corresponde*/
	  
  
  int total, hora,min, seg;
  
  cout<<"Digite o total de segundos : \n";
  cin>>total;
  
 hora= total  / 3600;
 total= total %3600;
 min =total  /60;
 
 seg = total % 60;
 
 cout<<" A quantidade exata sao: "<< hora <<" horas..."<<min<<" min...e "<<seg<<" segundos \n";


	return 0;
}
