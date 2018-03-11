//mice problem backtracking(recursion involved)
# include<iostream>
#define N 4
using namespace std;
void printSolution(int sol[N][N])
{
	for(int i=0;i<N;i++)
	{for(int j=0;j<N;j++)
		cout<<sol[i][j]<<"  ";
	cout<<endl;
	}
}

bool isSafe(int x,int y,int maze[N][N])
{	
	return (x>=0 && x<N && y>=0 && y<N && maze[x][y]==1);
}
bool generateSolutionUtil(int maze[N][N],int x,int y,int sol[N][N])
{	//base case
	if(x==N-1 && y==N-1)
	{
		sol[x][y]=1;
		return true;
	}
	if(isSafe(x,y,maze)==true)
	{
		sol[x][y]=1;
		
		if(generateSolutionUtil(maze,x+1,y,sol))
		return true;
		
		if(generateSolutionUtil(maze,x,y+1,sol))
		return true;
		
		sol[x][y]=0;
		return false;
	}
	return false;
}
bool generateSolution(int maze[N][N])
{
	int sol[N][N]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	if(generateSolutionUtil(maze,0,0,sol)==false)
{	cout<<"solution non existent";
	return false;
}
	
	printSolution(sol);
	return true;
}
int main()
{		
	int maze[N][N]={{1,0,0,0},{1,1,0,0},{0,1,0,0},{0,1,1,1}};

	generateSolution(maze);
	return 0;
}


