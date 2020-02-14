
#include <cstdlib>
#include <iostream>

using namespace std;

int consistir(int numero){
    do{
        cout<<"Entre com a quantidade de termos desejados(termo>=0): ";
        cin>>numero;              
    } while(numero<0);
    return numero;
}

int sequencia_padovan(int limite_seq){
    if(limite_seq==0||limite_seq==1||limite_seq==2)
        return 1;
    else
        return sequencia_padovan(limite_seq-2)+sequencia_padovan(limite_seq-3);
}

int main(int argc, char *argv[])
{
    int termo=0;
    cout<<"Sequencia de Padovan\n";
    termo=consistir(termo);
    cout<<" "<<sequencia_padovan(termo)<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
