#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	/* Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.
	 O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo: 

Código do produto Preço unitário 
1 		R$ 32,00 
2 		R$ 45,00 
3		R$ 37,00 
4 		R$ 33,00 
  */
  
  float real;
  int cod,qtde;
  
  cout<<"Calcular preço total devido por um cliente \n";
  cout<<"Digite o codigo do produto : \n";
  cin>>cod;
  
  cout<<"Digite a quantidade comprada: \n";
  cin>>qtde;
  
  if(cod==1){
  	cout<<"Voce escolheu o produto codigo 1 : \n";
  	cout<<"Foram compradas "<<qtde <<" pecas do produto numero "<<cod<<"\n";
  	real= qtde *32;
  	cout<<"O total devido pelo cliente eh : "<<real<< " reais\n";
  }
  	
  	  else if (cod==2){
  		cout<<"Voce escolheu o produto codigo 2 : \n";
      	cout<<"Foram compradas "<<qtde <<" pecas do produto numero "<<cod<<"\n";
  	    real= qtde *45;
  	    cout<<"O total devido pelo cliente eh : "<<real<< " reais\n";
	   }
	  
	     else if (cod==3){
	  	  cout<<"Voce escolheu o produto codigo 3 : \n";
  	      cout<<"Foram compradas "<<qtde <<" pecas do produto numero "<<cod<<"\n";
  	      real= qtde *37;
  	      cout<<"O total devido pelo cliente eh : "<<real<< " reais\n";
	    }
	    
  	         else if (cod==4){
  	         	cout<<"Voce escolheu o produto codigo 4 : \n";
  	            cout<<"Foram compradas "<<qtde <<" pecas do produto numero "<<cod<<"\n";
  	            real= qtde *33;
  	            cout<<"O total devido pelo cliente eh : "<<real<< " reais\n";
	          }
	 
	 else{
	 	cout<<"Codigo Invalido , Redigite : \n";
	 	
	 }
  
	





	return 0;
}
