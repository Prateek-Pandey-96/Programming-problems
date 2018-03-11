#include <iostream>
using namespace std;
void sortinsertion(int a[],int n)
{	int value;
	int hole;
	/*for(int i=1;i<=n;i++)
	{
	   value=a[i];
	   hole=i;
	   while(value<a[hole-1]&&hole>0)
	   {
	   	a[hole]=a[hole-1];
	   	hole=hole-1;
	   }
	   a[hole]=value;
	}
	cout<<"the sorted array is";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}*/

//alternate algorithm
	for(int i=1;i<=n;i++)
	{
		value=a[i];
		while(i>0 && value<a[i-1])
		{
			a[i]=a[i-1];
			i=i-1;
		}
		a[i]=value;
		}
		cout<<"the sorted array is";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

int main()
{

int a[4]={6,2,5,4};
sortinsertion(a,4);
}
