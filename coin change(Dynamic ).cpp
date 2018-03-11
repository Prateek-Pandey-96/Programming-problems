//program to find change of a coin
#include <iostream>
using namespace std;

int get_change(int val[],int m,int n)//here m is the size of the array,n is the value of which change is to be obtained
{
	int ans[n+1][m];int x,y;
	for(int i=0;i<m;i++)
	ans[0][i]=1;

	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<m;j++)
		{	
			x=(i-val[j]>=0)?ans[i-val[j]][j]:0;
			y=((j-1)>=0)?ans[i][j-1]:0;		
		
			ans[i][j]=x+y;
		}
	}
return ans[n][m-1];
}

int main()
{
	int val[]={1,2,3};
	int m=sizeof(val)/sizeof(val[0]);
	int answer=get_change(val,m,4);
	cout<<"answer is"<<answer;
	
}
