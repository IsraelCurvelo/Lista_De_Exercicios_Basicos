#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	//Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

int a, ano,mes,dia;

cout<< "Digite a idade da pessoa em dias: \n";

cin>>a;

ano= a/365;
mes=( a % 365)/30;
dia=(a % 365) % 30;

cout<< " A idade da pessoa eh: "<<ano<<"Ano(s) "<<mes<<" Mes(es) "<< "e "<<dia<< " dia(s)";

	return 0;
}
