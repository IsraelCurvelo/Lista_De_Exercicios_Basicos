#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	/* Escrever um algoritmo que lê um valor em Reais (R$)
	 e calcule qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto.
	 Escrever o valor lido e a relação de notas necessárias.   */
  
  
	float cem,cinq,vinte,dez,cinco,um;
	int total;
	
	
	cout<<"Digite o valor total em dinheiro : \n";
	cin>>total;
	
	cem= total/100;
	total = total % 100;
	
	cinq= total/50;
	total = total % 50;
	
	vinte=total /20;
	total = total %20;
	
	dez=total / 10;
	total = total % 10;
	
	cinco = total /5;
	
	um = total % 5;
	
	cout<<"A qtde minima em notas sao : "<<cem<<"  notas de 100 ..."<<cinq<<" notas de 50..."<<vinte<<" notas de 20 ..."<<dez<< " notas de 10..."<<cinco << " notas de 5...e "<<um<<" notas de 1 \n";
	
  
	





	return 0;
}
