#include <iostream>
#include <string>
using namespace std;
int main()
{	int n,m;
	cout<<"enter number of fav lucky strings and lucky strings"<<endl;
	cin>>n>>m;
	string str[n];
	cout<<"enter fav lucky strings";
	for(int i=0;i<n;i++)
	{cin>>str[i];
	}
	string str_dash[m];
	cout<<"enter lucky strings";
	for(int i=0;i<m;i++)
	{cin>>str_dash[i];
	}
	for(int i=0;i<m;i++)
	{	int c=0;
		for(int j=0;j<n;j++)
	{
		if (str_dash[i].find(str[j]) != std::string::npos||str_dash[i].size()>=47)c++;
		
	}
	if(c!=0)
		cout<<"good"<<endl;
		else
		cout<<"bad"<<endl;
	}


return 0;


}

