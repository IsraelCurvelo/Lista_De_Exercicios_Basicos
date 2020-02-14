#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	/* Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c,
	 onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva.
	  A seguir: Se i=1 escrever os três valores a, b, c em ordem crescente. 
                Se i=2 escrever os três valores a, b, c em ordem decrescente. 
                Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.  */
	
int i;
float a,b,c;

cout<<"Conjunto de 4 valores \n";
cout<<"Digite o valor inteiro positivo para 'I' \n";
cin>>i;

while(i<=0){
	cout<<"Redigite: \n";
	cin>>i;
}

cout<<"Digite  o valor para ' A ' \n";
cin>>a;
cout<<"Digite o valor para ' B ' \n";
cin>>b;
cout<<"Digite o valor para 'C' \n";
cin>>c;

if(i == 1){
  if (a<b and b<c){
	cout<<"A ordem crescente digitada eh: "<<a<<"..."<<b<<"..."<<c<<"\n";
	}
	    else if (a<b and c<b){
	  	 cout<<"A ordem crescente digitada eh: "<<a<<"..."<<c<<"..."<<b<<"\n";
	  	}
	        else if (b<a and a<c){
	   	     cout<<"A ordem crescente digitada eh : "<<b<<"..."<<a<<"..."<<c<<"\n";
	       }
	           else if(b<c and c<a){
	    	    cout<<"A ordem crescente digitada eh: "<<b<<"..."<<c<<"..."<<a<<"\n";
		      }
		         else if (c<a and a<b){
		         	cout<<"A ordem crescente digitada eh : "<<c<<"..."<<a<<"..."<<b<<"\n";
				 }
		             else if (c<b and b<a){
		             	cout<<"A ordem crescente digitada eh : "<<c<<"..."<<b<<"..."<<a<<"\n";
					 }
	}





else if (i ==2){
	if (a>b and b>c){
	cout<<"A ordem decrescente digitada eh: "<<a<<"..."<<b<<"..."<<c<<"\n";
	}
	    else if (a>b and c>b){
	  	 cout<<"A ordem decrescente digitada eh: "<<a<<"..."<<c<<"..."<<b<<"\n";
	  	}
	        else if (b>a and a>c){
	   	     cout<<"A ordem decrescente digitada eh : "<<b<<"..."<<a<<"..."<<c<<"\n";
	       }
	           else if(b>c and c>a){
	    	    cout<<"A ordem decrescente digitada eh: "<<b<<"..."<<c<<"..."<<a<<"\n";
		      }
		         else if (c>a and a>b){
		         	cout<<"A ordem decrescente digitada eh : "<<c<<"..."<<a<<"..."<<b<<"\n";
				 }
		             else if (c>b and b>a){
		             	cout<<"A ordem decrescente digitada eh : "<<c<<"..."<<b<<"..."<<a<<"\n";
                     }
	}
		

else if (i==3){
	if (a>b and b>c){
	cout<<"A ordem decrescente digitada, com maior no meio fica: "<<b<<"..."<<a<<"..."<<c<<"\n";
	}
	    else if (a>b and c>b){
	  	 cout<<"A ordem decrescente digitada, com maior no meio fica: "<<c<<"..."<<a<<"..."<<b<<"\n";
	  	}
	        else if (b>a and a>c){
	   	     cout<<"A ordem decrescente digitada, com maior no meio fica: "<<a<<"..."<<b<<"..."<<c<<"\n";
	       }
	           else if(b>c and c>a){
	    	    cout<<"A ordem decrescente digitada, com maior no meio fica: "<<c<<"..."<<b<<"..."<<a<<"\n";
		      }
		         else if (c>a and a>b){
		         	cout<<"A ordem decrescente digitada, com maior no meio fica: "<<a<<"..."<<c<<"..."<<b<<"\n";
				 }
		             else if (c>b and b>a){
		             	cout<<"A ordem decrescente digitada, com maior no meio fica: "<<b<<"..."<<c<<"..."<<a<<"\n";
                     }
}

else {
	cout<<"Os numeros digitados foram : a -> "<<a<<" b-> "<<b<<" c->"<<c<<"\n";
}






	return 0;
}
