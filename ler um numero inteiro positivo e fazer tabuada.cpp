#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	//Ler um número inteiro positivo e calcular e mostrar a tabuada
	
	
	int a,b,c;
	
	cout<<"Ler um numero inteiro positivo e calcular e mostrar a tabuada \n";
	
	cout<<"Digite um numero inteiro positivo \n";
	cin>>a;
	
	if (a<0){
		cout<<"Numero Invalido ,redigite \n";
	}
	else{
	
			cout<<"Numero verificado com sucesso \n";
	}
	

	
	while (b<=10){
		c=a*b;
		cout<< a <<"X"<<b <<"="<<c<<"\n";
		b=b+1;
		
	}
	
	
	
	return 0;
}
