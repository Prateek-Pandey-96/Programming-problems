#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct job
{	char id;
	int deadline;
	int profit;	
};

bool compare(job j1,job j2)
{
	return (j1.profit>j2.profit);
}
void print(job arr[],int n)
{
	sort(arr,arr+n,compare);
	int result[n];
	bool slot[n];
	
	for(int i=0;i<n;i++)slot[i]=false;
	
	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
		{	if(slot[j]==false)
			{result[j]=i;
			slot[j]=true;
			break;}
		}
	}
for(int i=0;i<n;i++)
{
	if(slot[i])
	cout<<arr[result[i]].id<<endl;}	
}

int main(){
	
	job arr[]={{'A',2,100},{'B',1,19},{'C',2,27},{'D',1,25},{'E',3,15}};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);	
	return 0;
}
