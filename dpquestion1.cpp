//LONGEST PALLINDROMIC SUBSEQUENCE
#include <iostream>
#include <string>
using namespace std;

void l_p_s(string s,int n)
{
	int dp[n][n];           //O(N^2)
	int ms=1;
	int si=0;
	
	for(int i=0;i<n;i++)
	dp[i][i]=1;				//AS ANY SUBSTRING OF LENGTH 1 WILL BE PALLINDROMIC
	
	for(int i=0;i<n-1;i++)  //FOR ANY SUBSTRING OF LENGTH 2 IT WILL BE PALLINDROMIC IF THIS CONDITION IS FULFILLED
	if(s[i]==s[i+1])
	{	dp[i][i+1]=1;
		ms=2;
		si=i;
	}
	//if the size is greater than or equal to three
	for(int k=3;k<=n;k++)
	{
		for(int i=0;i<n-k+1;i++)
		{
			int j=i+k-1;
			if(s[i]==s[j]&&dp[i+1][j-1]==1)
			{	dp[i][j]=1;
			if(k>ms)
			{
				ms=k;
				si=i;
			}
		}}
	}
	
	cout<<"THE LONGEST PALLINDROMIC SUBSTRING IS\n";
	for(int i=si;i<si+ms;i++)
	cout<<s[i];
}
int main()
{
	string s="banana";
	int size=sizeof(s)/sizeof(s[0]);
	l_p_s(s,size);
	return 0;
}
