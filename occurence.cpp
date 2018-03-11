#include <iostream>
using namespace std;
int main(){
	int t;//length of array
	int a[t];//array
	int c; //counter
	int rem;
	cout<<"enter the numbers in list";
	cin>>t;
	//we will input all the values in an array
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	//now we will check each element of the array
	for(int i=0;i<t;i++)
	{
		while(a[i]>0)
		{
		rem=a[i]%10;
		if(rem==4){c++;}
		a[i]=a[i]/10;
		}
		cout<<c<<endl;
		c=0;//remember to do this
		}
	
	}

