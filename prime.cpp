#include <iostream>
#include <math.h>
using namespace std;

void primecount(int N)
{
	for(int i=2;i<=N;i++)
	{
		if(N%i==0)
		{	int c=0;         //counter variable
			while(N%i==0)
			{
				N=N/i;
				c++;
			}
			cout<<i<<" occurs"<<c<<" times";
		}
	
	}
}

int main(){
	int N;
	cout<<"enter a number";
	cin>>N;
	primecount(N);
}
