#include <iostream>

/* 6)	Criar um vetor A do tipo inteiro de 5 elementos
"	Solicitar os valores para o usuário e inserir no vetor A
"	Criar um vetor B do tipo inteiro de 
"	Ler o vetor A e para cada elemento lido calcular o fatorial e gravar no B
"	Após de todos os elementos do vetor A, mostrar os dois vetores
 */
using namespace std;

int fatorial (int num){
	if (num ==1){
		return 1;
	}else{
		return num * fatorial (num-1);
	}
}

int main(int argc, char** argv) {
	int vetora[5];
	int vetorb[5];
	int i;
	
	for(i=0;i<5;i++){
		cin>>vetora[i];
	}
	
	for (i=0;i<5;i++){
     vetorb[i]=vetora[i];
}	
	cout<<endl<<endl;
	
	for (i=0;i<5;i++){
		cout<<vetora[i]<<" ";
	cout<<fatorial (vetorb[i])<<endl;
	
}
	
	return 0;
}
