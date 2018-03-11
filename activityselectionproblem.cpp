#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
struct Activity
{
	int start,finish;
};

bool compare(Activity S1,Activity S2)
{
	return(S1.finish<=S2.finish);
}

void printmaxactivities(Activity arr[],int n){
	sort(arr,arr+n,compare);
	
	int i=0;
	cout<<arr[i].start<<","<<arr[i].finish<<endl;
	for(int j=1;j<n;j++)
	{
		if(arr[j].start>=arr[i].finish)
		{cout<<arr[j].start<<","<<arr[j].finish<<endl;
		i=j;}
	}
	
}

int main()
{
	Activity arr[]={{5,9},{1,2},{3,4},{0,6},{5,7},{8,9}};
	int n=sizeof(arr)/sizeof(arr[0]);
	printmaxactivities(arr,n);
	return 0;
}
