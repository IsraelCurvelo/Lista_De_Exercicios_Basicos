#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N[10], temp,i,j;
    
    for(i=0; i<10; i++){
    	cin>>N[i];
	}
    
      
    for(i=0; i<10; i++)
    {
        if(N[i]<=0)
            N[i]=1;
    }
    for(i=0; i<10; i++){
    	cout<<"X["<<i<<"] = "<<N[i]<<endl;
	}
        
    return 0;
}
