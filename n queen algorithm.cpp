#include <iostream>
using namespace std;
int q;//global variable
void printmatrix(int a[][];int q){
	
		for(int i=0;i<q;i++)
		{	for(int j=0;j<q;j++)
			{cout<<a[i][j]<<" ";
			}
	cout<<endl;
}}

int main(){
	
	cout<<"enter the number of queens";
	cin>>q;
	int a[q][q];
	for(int i=0;i<q;i++)
		for(int j=0;j<q;j++)
		a[i][j]=0;//create a zero matrix
	printmatrix(q);
	//queens(0);
	return 0;
}

/*void queens(int row)//function to check if queens can be placed at any position in that particular row
{
	if(row<n)
	{for(int i=0;i<q;i++)
	{
		if(isfeasible(row,i))
		{a[row][i]=1;}
		queens(row+1);
		a[row][i]=0;
	}}
	else printmatrix();
}

bool isfeasible(int row,int column)
{
	
	
}
*/

