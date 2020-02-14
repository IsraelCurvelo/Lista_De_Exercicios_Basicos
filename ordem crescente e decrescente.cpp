#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
/*Solicitar dois valores inteiros, e mostrá-los na ordem crescente e decrescente*/

int a, b;

cout<<"Solicitar 2 inteiros e mostrar em ordem crescente e decrescente : \n";
cout<<"Digite o valor de a : \n";
cin>>a;
cout<<"Digite o valor para b : \n";
cin>>b;

if (a<=b){
	cout<<"Ordem crescente : "<<a<<"..."<<b<<"\n";
	cout<<"\n E Agora em ordem descrescente : \n";
	cout<<"Ordem crescente : "<<b<<"..."<<a<<"\n";
}
  else{
  	cout<<"Ordem crescente : "<<b<<"..."<<a<<"\n";
    cout<<"\n E Agora em ordem descrescente : \n";
	cout<<"Ordem crescente : "<<a<<"..."<<b<<"\n";
  }
  
  
  
  
  
  
  
	return 0;
}
