//activity selection(greedy algorithm)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct activity
{
	char a;
	int start;
	int finish; 
};

bool compare(activity a1,activity a2)
{
	return (a1.finish<a2.finish);
}

void print_max_activities(activity arr[],int n)
{
	sort(arr,arr+n,compare);
	int i=0;
	cout<<arr[i].a;
	for(int j=1;j<n;j++)
	{
		if(arr[j].start>=arr[i].finish)
		{cout<<arr[j].a;
		i=j;
		}
	}
	
}

int main()
{
	activity arr[]={{'p',0,6},{'q',3,4},{'r',1,2},{'s',5,9},{'t',5,7},{'u',8,9}};
	int n=sizeof(arr)/sizeof(arr[0]);
	print_max_activities(arr,n);
}

