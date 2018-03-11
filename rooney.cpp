#include <iostream>
using namespace std;
int main()
{
 int t,n;
 cout<<"enter test cases";
 cin>>t;
 for(int i=1;i<=t;i++)
 {
 	cout<<"enter the number of matches\n";
 	cin>>n;
 	int a[n],b[n-1];
 	//loop for entering the goals in each match
 	cout<<"enter the number of goals"<<endl;
 	 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
		for(int i=0;i<n-1;i++)
 	{
 		b[i]=a[i+1]-a[i];
	}	
	//loopfor calculating maximum goal difference
	int max=0;
	for(int i=0;i<n-1;i++)
 	{
 		if(b[i]>max)
 		max=b[i];
	}
	if(max>0)
	cout<<max;
	else
	cout<<"unfit";	
 }
}
