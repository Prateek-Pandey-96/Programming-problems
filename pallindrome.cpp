#include <iostream>
using namespace std;
int main(){
	int x,i,d=0;
	cout<<"enter the length of number";//enter the number of digits
	cin>>x;
	int *p=NULL;             /*using pointer
	                          to solve the question*/
	p=new int[x-1];

	
		for (i=0;i<x;i++)   //enter the number
		{	
			cin>>p[i];
			
		}
	if(p[0]!=0)             //checks that first digit isnt zero
	{
	
	    for (i=0;i<x/2;i++)
	    {if (p[i]==p[x-(i+1)])
	    d++;
		}
		if(d==x/2)
	cout<<"win";
	else
	cout<<"loss";
}
else
{ 
cout<<"first digit cant be zero";
}}
