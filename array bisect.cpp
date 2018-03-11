#include <iostream>
using namespace std;
//best method
int main()
{
	int n,A[n];
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the array";
	int sum=0;
	for(int i=0;i<n;i++)
	{cin>>A[i];
	sum+=A[i];}
	int lsum=0,rsum=sum-A[0];
	for(int i=0,j=1;j<n;i++,j++)
	{lsum=lsum+A[i];
	rsum=rsum-A[j];
	if(lsum==rsum)
	cout<<A[j];
}
}



















/*int main()
{	int n,A[n];
	cout<<"enter the size of array";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>A[i];
	for(int i=0;i<n;i++)
	{
	int sum=0;
	for(int j=0;j<i;j++)sum=sum+A[j];
	
	int sumd=0;
	for(int k=i+1;k<n;k++)sumd=sumd+A[k];
	
	if(sum==sumd)cout<<i;
	
	}
	
}*/

