//missing number
#include <iostream>
using namespace std;
bool isSafe(int number,int index)
{
	if(index+1==number)return true;
	return false;
}

int missingnumber(int a[],int size)
{
	int low=0;
	int high=size-1;
	int mid;
	while(low<high)
	{mid=(low+high)/2;
	if(isSafe(a[mid],mid))low=mid+1;
	if(isSafe(a[mid],mid)==false)high=mid;
	if(low==high)return low+1;
	}
	
}
int main()
{
	int a[]={2,3,4,5,6,7,8};
	int size=sizeof(a)/sizeof(a[0]);
	cout<<missingnumber(a,size);
	return 0;
}
