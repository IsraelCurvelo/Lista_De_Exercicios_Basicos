#include <iostream>

using namespace std;

int fatorial (int num);

int main(int argc, char** argv) {
	int a;
	
cout<<"Digite o valor do fatorial que deseja "<<endl;
cin>>a;
cout<<"O fatorial eh :"<<fatorial (a);
	
	return 0;
}

int fatorial (int num){
	if (num ==1){
		return 1;
	}else {
		num =num * fatorial (num-1);
	}
	
}
