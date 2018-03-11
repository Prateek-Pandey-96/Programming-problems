#include <iostream>
using namespace std;

void mergesort(int A[],int n)
{
	int mid=n/2;
	int L[mid];
	int R[mid];
	for (int i=0;i<mid;i++)
	{
		L[i]=A[i];
		R[i]=A[mid+i];
	}
	mergesort(L,mid);
	mergesort(R,mid);
	merge(L,mid,r,mid,A,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}
}

void merge(int L[],int l,int R[],int r,int A[],int n)
{
	int i=0;
	int j=0;
	int k=0;
	while(i<l && j<r)
	{
	if(L[i]<R[j])
	{	A[k]=L[i];
	i++;
	k++;
	}
	else
	{A[k]=R[j];
	j++;
	k++;
	}
	}
	
while(i<l){A[k]=L[i];i++;k++;}
while(j<r){A[k]=R[j];j++;k++;}
}


int main(){
	int n;
	cout<<"enter size of the array";
	cin>>n;
	int A[n];
	cout<<"enter the array";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}	
	mergesort(A,n);
}	
