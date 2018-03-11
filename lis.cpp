//longest increasing subsequence
#include <iostream>
#include <vector>
using namespace std;

int l_i_s(vector<int> &A)
{
	int n=A.size();
	int *lis=new int[n];
	
	for(int i=0;i<n;i++)
	lis[i]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(A[j]<A[i]&&lis[i]<lis[j]+1)
			lis[i]=lis[j]+1;
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
	if(lis[i]>max)max=lis[i];
	
delete(lis);
	
	return max;
}
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
	cin>>a;
	v.push_back(a);
}

cout<<l_i_s(v);
	
}
