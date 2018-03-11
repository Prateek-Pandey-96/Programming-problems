#include<iostream>
using namespace std;
void printspiral(int a[][4],int m,int n)
{
	int t=0;
	int b=m-1;
	int l=0;
	int r=n-1;
	int dir=0;
	while(t<=b && l<=r){
	if(dir==0){
		for(int i=l;i<=r;i++){
		cout<<a[t][i];
		dir=1;
		}t++;
		}
	else if(dir==1){
		for(int i=t;i<=b;i++)
		{		
		cout<<a[i][r];
		dir=2;
	}r--;
	}
	else if(dir==2){
		for(int i=r;i>=l;i--)
		{		
		cout<<a[b][i];
		dir=3;
	}b--;
	}
	else if(dir==3){
		for (int i=b;i>=t;i--)
		{cout <<a[i][l];
		dir=0;
		}l++;
	}}}
	
	int main(){
		
		int a[4][4];
		cout<<"enter the matrix";
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cin>>a[i][j];
				
			}
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cout<<a[i][j];
								
			}
		cout<<endl;
		}
		printspiral(a,4,4);
	}
