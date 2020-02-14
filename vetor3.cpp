#include <iostream>

/* 3)	Criar um vetor  A com 10 elementos
"	Inserir os elementos de 1 a 10 no vetor
"	Criar um outro vetor B que conterá o elemento do vetor A multiplicado por 2
"	Após Mostrar os dois vetores
 */
using namespace std;

int main(int argc, char** argv) {
	
	int vetor[10];
	int vetorB[10];
	int i,a=1;
	
	for (i=0;i<10;i++){
		vetor[i]=a;
		a++;
			cout<<vetor[i]<<" ";
		
	}
	
	cout<<"\nVetor B multiplicado por 2:"<<endl;
	for (i=0;i<10;i++){
		
	
		
	vetorB[i]=vetor[i]*2;
		cout<<vetorB[i]<<" ";
	}
	
	
	return 0;
}
