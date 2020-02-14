// calculadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

double soma(float a, float b) {
	b = a + b;
	cout << "O resultado da soma eh : " << b << endl;
	return b;
	
}

double sub(float a, float b) {
	b = a - b;
	cout << "O resultado da subtracao eh : " << b << endl;
	return b;

}
double mult(float a, float b) {
	b = a * b;
	cout << "O resultado da mult eh : " << b << endl;
	return b;

}

double div(float a, float b) {
	b = a / b;
	cout << "O resultado da div eh : " << b << endl;
	return b;

}

int main(){
	int opcao;
	float a, b;

	cout << "Digite uma opcao" << endl;
	cout << " 1- SOMA \n 2- SUBTRACAO \n 3- MULTIPLICACAO \n 4- DIVISAO" << endl;
	cin >> opcao;

	if (opcao > 4) {
		cout << "Opcao invalida"<<endl ;
	}

	switch (opcao ){
		
	case 1:
		cout << "Voce esta na opcao 1 : SOMA" << endl;
		cout << "Digite o numero para soma : " << endl;
		cin >> a;
		cout << "Digite o numero para soma : " << endl;
		cin >> b;
		
	
		cout<<soma(a,b)<<endl;
		
        break;

	case 2:
		cout << "Voce esta na opcao 2 : SUBTRACAO" << endl;
		cout << "Digite o numero para sub: " << endl;
		cin >> a;
		cout << "Digite o numero para sub: " << endl;
		cin >> b;


		cout << sub(a, b) << endl;

		break;

	case 3:
		cout << "Voce esta na opcao 1 : MULTIPLICACAO" << endl;
		cout << "Digite o numero para mult : " << endl;
		cin >> a;
		cout << "Digite o numero para mult : " << endl;
		cin >> b;


		cout << mult(a, b) << endl;

		break;

	case 4:
		cout << "Voce esta na opcao 4 : DIVISAO" << endl;
		cout << "Digite o numero para div: " << endl;
		cin >> a;
		cout << "Digite o numero para div : " << endl;
		cin >> b;


		cout << div(a, b) << endl;

		break;
	
	}






	system("pause");
    return 0;
	

}


