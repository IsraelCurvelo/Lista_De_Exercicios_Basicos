#include<iostream>
using namespace std;
int main()
{
int total, cont = 0, c2 = 0, resultado = 0, nc = 0;
cout << "Quantos numeros serao verificados? "; 
cin >> total;                                                                   
while (cont <= total){                                                            

     for (c2 = 1; c2 <= cont; c2++){                                                     
      resultado = cont % c2;
      
         if (resultado == 0){
         nc = nc + 1;
                      }
                                }
                                
                                
              if (nc == 2){                                                             
              cout << " " << cont;
                          }
nc = 0;
cont++;
}


return 0;
}
