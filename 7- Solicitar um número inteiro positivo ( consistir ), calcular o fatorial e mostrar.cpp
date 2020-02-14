#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


	

int main(int argc, char** argv) {
//7- Solicitar um número inteiro positivo ( consistir ), calcular o fatorial e mostrar
 int n,x;
  float fat;
  fat=1;
  
  cout<<"Digite um numero inteiro positivo : \n";
  cin>>n;
  while (n<=0){
  	cout<<"Redigite: \n";
  	cin>>n;
  }
  
	  
	  x = n;
	  while(x > 1)
	  {
			
			  fat = fat * x--;
			
	  }
	  
	  cout<<"O fatorial de "<<n<<" eh "<<fat<<"\n";
	  
	  system("pause");


	return 0;
}
