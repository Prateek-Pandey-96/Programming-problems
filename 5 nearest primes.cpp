#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int isprime(int a)
{	if(a==0||a==1||a<0)return 0;
	for(int i=2;i<=sqrt(a);i++)
	if(a%i==0)return 0;
	return 1;
}

int main()
{	int n;
vector <int> v;
	cout<<"enter a number";
	cin>>n;
	int j=5,d=0;
	while(j)
	{
	int n1=n+d;
	int n2=n-d;
	if(d==0  && isprime(n)==1)
	{j--;
	if(n>0)
	v.push_back(n);
	}
	if(d!=0 && isprime(n1)==1)
	{
		j--;
		
	v.push_back(n1);
	}
	if(d!=0 && isprime(n2)==1)
	{
		j--;
		
	v.push_back(n2);
		}
		d++;	
	}
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	return 0;
}
