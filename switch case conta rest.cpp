#include <iostream>
#include <stdlib.h>


using namespace std;

int main(int argc, char** argv) {
	
	int vforn,vtotal,opcao;
    int res,troco,cem,cinq,vint,dez,cinco,dois,um,resto;
	
	cout<<"Digite a opcao desejada: \n 1- Ler Dois Valores (Fornecido e Total) \n";
	cout<<" 2- Obter troco \n 3- Mostrar Cedulas do troco \n 4- Sair do Programa \n";
	cin>>opcao;
	 
	
	switch(opcao){
		
		case 1:
			cout<<"Ler Dois valores\n";
			cout<<"Digite o valor Total da Conta: \n";
			cin>>vtotal;
			cout<<"Digite o valor Pago:\n";
			cin>>vforn;
			
			cout<<"O valor total da conta foi: "<<vtotal <<" E pago: "<<vforn;			
			break;
			
		case 2:
			cout<<"Obter troco: \n";
			cout<<"Digite o valor Total da Conta: \n";
			cin>>vtotal;
			cout<<"Digite o valor Pago:\n";
			cin>>vforn;
			res= vforn-vtotal;
			cout<<"O troco eh de: "<<res;	
			break;
				
		case 3:
			cout<<"Mostrar cedulas do troco: \n";
			cout<<"Qual o valor do troco: \n";
			cin>>troco;
			
			cem = troco/100;
			resto= troco % 100;
			
			cinq = resto /50;
			resto = resto%50;
			
			vint = resto/20;
			resto= resto %20;
			
			dez= resto /10;
			resto=resto %10;
			
			cinco = resto/5;
			resto= resto%5;
			
			dois= resto/2;
			um=resto%2; 
			
			cout<<"O troco  sera com: \n"<<cem <<" Nota(s) de 100\n"<<cinq <<" Nota(s) de 50\n";
			cout<<vint <<" Nota(s) de 20\n"<<dez<<" Nota(s) de 10\n"<<cinco<<" Nota(s) de 5\n"<<dois <<" Nota(s) de 2\n"<<um<<" Nota(s) de 1\n";
			
			
		    break;
			
		default:
			cout<<"Sair do Programa :";
						
		break;
			
		
	}
	
	
	
	
	return 0;
}
