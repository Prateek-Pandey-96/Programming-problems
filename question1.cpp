//quetion 1 on backtrack
#include <iostream>
using namespace std;
#define N 4
void printsolution(int matrix[N][N])
{
	for(int i=0;i<N;i++)
	{
	for(int j=0;j<N;j++)
	{
	cout<<matrix[i][j]<<" ";
	}
	cout<<endl;}
}

bool isSafe(int matrix[N][N],int row,int col)
{
	int x=row-1;
	int y=col-1;
	int z=row+1;
	for(int j=0;j<col;j++)
	if(matrix[row][j]==1)return false;
	while(x>=0&&y>=0)
	{
		if(matrix[x][y]==1)return false;
		x--;y--;
	}
	while(z<N&&y>=0)
	{
		if(matrix[z][y]==1)return false;
		z++;y--;
	}
	return true;
}

bool solveUtil(int matrix[N][N],int col)
{
	if(col==N)return true	;
	for(int i=0;i<N;i++)
	{
		if(isSafe(matrix,i,col))
		{matrix[i][col]=1;
		if(solveUtil(matrix,col+1)	==true)return true	;
		matrix[i][col]=0;
		}
	
	}
	return false;
}
void solveNQueen()
{
	int matrix[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
    };
	if(solveUtil(matrix,0)==false)
	{cout<<"no solution";
	return;}
	printsolution(matrix);
	
}

int main()
{
	solveNQueen();
	return 0;
}
