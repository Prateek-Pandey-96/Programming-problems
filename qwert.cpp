//min jump dp
#include <iostream>
#include <algorithm>
using namespace std;

int minJumps(int a[],int size)
{
	int mj[size];
	mj[0]=0;
	for(int i=1;i<size;i++)
	mj[i]=1000000;
	
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<i;j++)
		if(j+a[j]>=i)
		mj[i]=min(mj[i],mj[j]+1);
	}
	return mj[size-1];
}
int main()
{
	int a[]={2,1,3,2,3,4,5,1,2,8};
	cout<<minJumps(a,10);
	return 0;
}
