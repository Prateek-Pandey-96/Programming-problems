#include <iostream>
#include <cmath>
using namespace std;
double func(double x)
{	double y;
	y=x*x-1;
	return y;
}
int main(){ 
	double a,b,x;
	cout<<"enter lower limit \n";
	cin>>a;
	cout<<"enter upper limit \n";
	cin>>b;
	x=(a+b)/2;
	while(abs(func(x))>=10^-4)
	{
		x=(a+b)/2;
		if(func(x)>0)
		a=x;
		else
		b=x;
	}
	cout<<"the root is"<<x;
	}

