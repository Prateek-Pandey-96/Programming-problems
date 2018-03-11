#include <iostream>
using namespace std;
void babaji(int A[],int n)
{
int c=0;
for(int j=1;j<n-1;j++)
    {
    
    for(int i=0;i<n-1;i++)       
    {   if(A[i]>A[i+1])
        {c=A[i];
        A[i]=A[i+1];
        A[i+1]=c;
        c=0;
    }}
    }
   /* 
    for(int i=0;i<n-1;i+=2)
    {
        int c=0;
        c=A[i];
        A[i]=A[i+1];
        A[i+1]=c;
    }*/
    
    for(int i=0;i<n;i++)
    {cout<<A[i];
	}
}

int main()
{
	int A[6]={6,2,3,4,5,1};
	babaji(A,6);
}
