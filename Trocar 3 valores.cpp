#include <iostream>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	/*) Receber 3 valores numéricos em 3 variáveis, A, B e C,
	 e trocar os valores entre as variáveis de forma que, ao final do algoritmo,
	  a variável A possua o menor valor e a variável C o maior..*/
	  
  float a,b,c;
	  
	  cout<<"Digite 3 valores : \n";
	  cout<<"Digite o primeiro valor \n";
	  cin>>a;
	  cout<<"Digite o segundo valor: \n";
	  cin>>b;
	  cout<<"Digite o terceiro valor: \n";
	  cin>>c;
	  
	  if (a< b and c ){
	  	 if (c> b){
	  	 	cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
		   else { 
		     c=b;
		     cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
	  	 
	  }
	  
	  
	   
	  if (b< a and c ){
	  	 if (c> a){
	  	 	a=b;
	  	 	cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
		   else { 
		     
		     c=a;
		     a=b;
		     cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
	  	 
	  }
	  
	   
	  if (c< b and a ){
	  	 if (b>a){
	  	 	a=c;
	  	 	c=b;
	  	 	cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
		   else { 
		     a=c;
			 c=b;
		     cout<<"A Variavel A eh a menor : "<<a<< "  A variavel C eh maior "<<c<<"\n";
		   }
	  	 
	  }
	  
	  

   


	return 0;
}
