#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	/*5- Ler tr�s notas de 50 alunos de uma turma. Para cada aluno, calcule a m�dia ponderada, como segue: 
MP = ( n1*2 + n2*4 + n3*3 ) / 10
Al�m disso, calcule a m�dia geral da turma. Mostre a m�dia de cada aluno e uma mensagem "Aprovado", 
caso a m�dia seja maior ou igual a sete, e uma mensagem "Reprovado", caso contr�rio. Ao final, mostre a m�dia geral. */

float n1,n2,n3,media,cont,mp;
cont =1;

cout<<" Ler 3 notas de 50 alunos e mostrar aprovado / reprovado e media geral \n";

while (cont <=50){
	
}

cout<<" Aluno"<<cont<<"  : Digite a primeira nota: \n";
cin>>n1;
cout<<" Aluno"<<cont<<"  : Digite a segunda nota: \n";
cin>>n2;
cout<<" Aluno"<<cont<<"  : Digite a terceira nota: \n";
cin>>n3;

mp= (n1*2 + n2*4+ n3*3)/10;
cout<<"Media final do aluno :"<<cont<<" eh: "<<mp<<"\n";

if ( mp >= 7){
	cout<<"APROVADO \n";
	
}
 else {
 	cout<<"REPROVADO \n";
 }

	return 0;
}
