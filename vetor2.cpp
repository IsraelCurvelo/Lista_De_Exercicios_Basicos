#include <iostream>

/* 2)	Criar um vetor de 20 elementos
- Inserir  somente os pares come�ando de 10
- ap�s a inser��o dos elementos, mostrar o vetor e a somat�ria dos elementos.
*/
using namespace std;

int main(int argc, char** argv) {
	int vetor[20];
	int i =0,a=0;
	
	while (i<20){
	
vetor[i]=a+10;
	
	a=a+2;
	
	cout<<vetor[i]<<endl;
	i++;
}
	return 0;
}
