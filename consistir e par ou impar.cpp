#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
//	Solicitar um valor inteiro positivo ( consistir ) e mostrar se esse número é par ou impar

int a ;



cout<<"Digite um valor inteiro positivo: \n";
cin>>a;

while (a<1){
	cout<<"NUMERO INVALIDO , REDIGITE ! \n ";
cin>>a;
}

a= a % 2;

if (a==0){
	cout<<"EH PAR!!! \n";
}

else{
	cout<<"EH IMPAR !! \n";
}

	return 0;
}
