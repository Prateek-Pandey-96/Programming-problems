#include<iostream>
using namespace std;
int main(){
	int t,n,c;
	cout<<"enter the number of test cases";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Enter the number of digits";
		cin>>n;
		int a[n],b[n-1];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int k=0;k<n-1;k++){
			b[k]=a[k]+a[k+1];
		}
		c=b[0];
	    for(int k=0;k<n-1;k++)//op for comparing 
		{
		if (b[k]<b[0])
		{
		c=b[k];
		}cout<<c;
}}}
