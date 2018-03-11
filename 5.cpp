#include <iostream>
using namespace std;
int main(){
	int n,a[n];
	cout<<"enter size";
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	int x,y;
	cin>>x;
	cin>>y;
	int counter=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=x)counter++;
		else if(a[i]>x)
		{while(a[i]>x)
			{
			counter++;
			a[i]=a[i]-(x-y);
		}counter++;
		}
		
	}
	cout<<"steps are"<<counter;
}
