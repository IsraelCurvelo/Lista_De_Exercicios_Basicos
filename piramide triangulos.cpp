#include <iostream>

using namespace std;

int estrela ();
   
   
int main(int argc, char** argv) {
	
	int cont;
	char a;
	a='*';
	
cout<<"Triangulo de * \n\n";
cout<<estrela();

return 0;
}


int estrela (){
int tam, i, j;
 tam= 8;
    
for (i = 1; i <= tam; i = i + 1){
	
	
	

           putchar('*');
          putchar('\n');
          
          estrela ();
     }
    return 0;
}
