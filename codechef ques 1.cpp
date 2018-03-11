#include <iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cout<<"enter the number of test cases"<<endl;
	cin>>t;
	for(int i=0;i<t;i++)
	{	int n;
		cout<<"enter the number of buildings";
		cin>>n;
		string s;
		cout<<"enter the string";
		cin>>s;
		int c=0;
		if(n==1&&s[0]=='0')
		{
			cout<<"the number of safe buildings are 1";
			break;
		}
		
		if(s[0]=='0'&&s[1]=='0')
		c++;
		if(s[n-1]=='0'&&s[n-2]=='0')
		c++;
		for(int j=1;j<n-1;j++)
		{
			if(s[j-1]=='0'&&s[j+1]=='0'&& s[j]=='0')
			c++;
		}
		
	cout<<"the safe buildings are"<<" "<<c<<endl;	
				
	}
}
