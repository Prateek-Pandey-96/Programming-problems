#include <iostream>
using namespace std;
int main()
{
	int t;
	cout<<"enter the number of test cases"<<endl;
	cin>>t;
	int g;
	cout<<"enter the number of games"<<endl;
	cin>>g;
	for(int i=1;i<=g;i++)
	{
	int a[3],ans;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	if(a[0]==1&&a[2]==1)
	{
	  ans=a[1]/2;
	 cout<<ans;}
	 else if(a[0]==1 && a[2]==2)
	{ ans=a[1]-a[1]/2;
	cout<<ans;}
	else if(a[0]==2&& a[2]==1)
	{ans=a[1]-a[1]/2;
	cout<<ans;
	}
	else if(a[0]==2&& a[2]==2)
	{ans=a[1]/2;
	cout<<ans;
	}}
}
