#include <iostream>

using namespace std;

int fibonacci (int num){
	if (num ==1 || num ==2){
		return 1;
	}else {
		return num=  fibonacci(num-1)+fibonacci(num-2);
	}
}

int main(int argc, char** argv) {
	
	int a;
	cout<<"Digite o termo que deseja parar o fibonacci "<<endl;
	cin>>a;
	
	cout<< fibonacci (a);
	
	return 0;
}
