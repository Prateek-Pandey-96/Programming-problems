#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int sum)
{
	  unordered_map <int, int> m;
	for(int i=0;i<n;i++)
	m[arr[i]]++;
	
	int c=0;
	for(int i=0;i<n;i++)
	{
	c=+m[sum-arr[i]];
	if(sum-arr[i]=arr[i])
	c--;
	
	return c/2;
	}
	
	int main()
	{
		int arr[4]={1,5,-7,4};
		cout<<count(arr,4,6);
	}
