//n queen problem
#include <iostream>
using namespace std;
#define n 8
void printSolution(int board[n][n])
{
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	cout<<board[i][j]<<" ";
	cout<<endl;
	}
}
bool isSafe(int board[n][n],int row,int column)
{
	for(int j=0;j<column;j++)
	if(board[row][j]==1)return false;
	
	for(int i=row,j=column;i>=0&&j>=0;i--,j--)
	if(board[row][column]==1)return false;
	for(int i=row,j=column;i<n&&j>=0;i++,j--)
	if(board[row][column]==1)return false;
	
	return true;
}
bool solveNQueenUtil(int board[n][n],int column)
{
	if(column==n)return true;
		
}
