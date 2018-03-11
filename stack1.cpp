//rain water trapping
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int maxwatertrapped(int A[],int n)
{
	stack<int> S;
	int current=0;
	int answer=0;
	while(current<n)
	{
		while(!S.empty() && A[current]>=A[S.top()])
		{
			int top=S.top();
			S.pop();if(S.empty())break;
			int d=current-S.top()-1;
			int h=min(A[current],A[S.top()])-A[top];
			 answer=answer+h*d;
		}
	S.push(current++);	
	}
	return answer;
}

int main()
{	int n;
	int a[6];
	for(int i=0;i<6;i++)
	cin>>a[i];
	
	int aa=maxwatertrapped(a,6);
	cout<<"answer is"<<aa;
}
