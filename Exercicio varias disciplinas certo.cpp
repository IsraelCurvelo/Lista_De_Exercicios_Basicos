



#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main (int argc, char** argv){

int a,b;
a=0,b=0;
float p1,p2,media;
p1=0,p2=0,media=0;


cout<< "Exercicio 1 \n";

cout<<"Programa q avalia media de alunos \n";
cout<<"\n Digite a nota para a primeira prova \n";
cout<<"\n";
cin>>p1;
cout<<"\n";
        
cout<< "\n Digite a nota para a segunda nota : \n";
cout<<"\n";
cin>>p2;
cout<<"\n";
         
media= (p1 + p2) /2;
cout<<"A media eh  :   "<<media;
        
cout<<"\n \n";

          
          
cout<< "\n Exercicio 2 \n";
cout<<"Com base nas notas acima digitas o aluno esta : \n";
          
      if (media>=6){
            cout<<"Aprovado \n \n";
                   }
      else{
            cout<<"Reprovado \n \n";
                   }
                      
                      
                      
            
			
cout<<"\n Exercicio 3 \n";
cout<<"\n";         
         
cout<<"Digite a quantidade de disciplina \n";
cout<<"\n";
cin>>a;


b=1;

     while(b <= a) {
cout<<"Programa q avalia media de alunos \n";
cout<<"\n Digite a nota para a primeira prova  \n \n";
        
cin>>p1;
cout<<"\n";
        
cout<< "\n Digite a nota para a segunda nota : \n";
cout<<"\n";
cin>>p2;
cout<<"\n";
media= (p1 + p2) /2;
cout<<"A media eh  :   "<<media;
cout<<"\n";
         
         
        if (media>=6){
cout<<"Aprovado  \n \n";
                      
                      }
        else{
cout<<"Reprovado \n \n";
                       
            }
        
        
b=b+1;


}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}




