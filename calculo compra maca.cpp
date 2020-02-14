#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	/* As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12.
	 Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra. 

   */
  
  
	float total , qtde;
	
	cout<<" Digite a quantidade de macas a ser comprada: \n";
	cin>>qtde;
	
	if(qtde >=12){
		total = qtde *1.00;
		cout<<"O valor total da compra eh: "<<total <<" reais \n";
	}
	 else {
	 	total= qtde *1.30;
	 	cout<<"O valor total da compra eh: "<<total <<" reais \n";
	 }
  
	





	return 0;
}
