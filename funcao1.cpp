#include <iostream>

using namespace std;
/* 1-	Solicitar um valor inteiro positivo ( consistir utilizando fun��o )
Calcular a divis�o por 2 (dois) com fun��o 
Mostrar o resultado
*/

int consistir (int num){
	
	if (num>0){
		return num;
	} else {
		cout<< "Redigite"<<endl;
		cin>>num;
		 return consistir(num);
	}
}

float divisao (float num){
	num= num /2;
	return num;
}

int main(int argc, char** argv) {
	float a;
	
	cout<<"Digite um numero inteiro positivo :"<<endl;
	cin>>a;
	
	a=consistir (a);
	
	cout<<"O resultado da divisao por 2 eh :"<<divisao(a)<<endl;
	
	
	return 0;
}
