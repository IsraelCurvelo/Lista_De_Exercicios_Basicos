#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//3- Mostrar os pares entre 10 e 100 e a somatória dos pares
	
	int a,b;
	a=10;
	cout<<"3- Mostrar os pares entre 10 e 100 e a somatória dos pares \n";
	
	while ( a<=100){
		cout<<a<<" \n";
		a=a+2;
		b=b+a;
		cout<<" A Soma esta em :"<<b<<"\n";
	}
	return 0;
}
