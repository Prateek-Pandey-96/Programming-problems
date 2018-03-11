//program for largest rectangle
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int find_max_area(vector<int> &A)
{	
	stack<int> S;
	int current=0;
	int area_max=0;
	int area_with_top;
	while(current<A.size())
	{
		if(S.empty()||A[current]>=A[S.top()])
		S.push(current++);
		else
		{
			int top=S.top();
			S.pop();
			area_with_top=A[top]*(S.empty()?current:current-S.top()-1);
			if(area_with_top>area_max)area_max=area_with_top;
		}
	}
	while(S.empty()==false)
	{
			int top=S.top();
			S.pop();
			area_with_top=A[top]*(S.empty()?current:current-S.top()-1);
			if(area_with_top>area_max)area_max=area_with_top;
		}
	return area_max;
}

int main()
{
	vector<int> v;
	int n;
	for(int i=0;i<6;i++)
	{
		cout<<"enter value";
	cin>>n;
	v.push_back(n);
	}
int answer=find_max_area(v);
cout<<"answer"<<" "<<answer;
}
