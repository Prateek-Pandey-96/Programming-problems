//longest path in a matrix
#include <iostream>
#include <bits/stdc++.h>
#define n 3--

using namespace std;

int longest(int i,int j,int mat[n][n],int dp[n][n])
{
	if(i<0||i>n-1||j<0||j>n-1)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	if(i>0 && mat[i][j]+1==mat[i-1][j])
		return dp[i][j]=1+longest(i-1,j,mat,dp);
	if(i<n-1 && mat[i][j]+1==mat[i+1][j])
		return dp[i][j]=1+longest(i+1,j,mat,dp);
	if(j>0 && mat[i][j]+1==mat[i][j-1])
		return dp[i][j]=1+longest(i,j-1,mat,dp);
	if(j<n-1 && mat[i][j]+1==mat[i][j+1])
		return dp[i][j]=1+longest(i,j+1,mat,dp);	
	
	return dp[i][j]=1;
}
int find_longest(int mat[n][n])
{
	int dp[n][n];
	int result=1;
	
	for(int i=0;i<n;i++)
	  	for(int j=0;j<n;j++)
		dp[i][j]=-1;
		
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
		if(dp[i][j]==-1)
		longest(i,j,mat,dp);
		result=max(result,dp[i][j]);
	}
	return result;
}
int main()
{
	int mat[3][3]={{1,2,9},{5,3,8},{4,6,7}};
	int ans=find_longest(mat);
		return ans;
}

