//generating subsets
#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;


void helper(vector<int> &A,vector<vector<int> > &result,vector<int> &subset,int index)
{
	if(index==A.size())
	{result.push_back(subset);
	return;}
	
	int c_i=index+1;
	 while (c_i< A.size() && A[c_i] == A[index]) {
                c_i++;
            }
	for(int i=0;i<=c_i-index;i++)
	{
		for(int j=0;j<i;j++)
		subset.push_back(A[index]);
		helper(A,result,subset,c_i);
		for(int j=0;j<i;j++)
		subset.pop_back();	
	}
	
	
}

vector<vector<int> > subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
   vector<vector<int> > result;
   vector<int>subset;
   helper(A,result,subset,0);
   sort(result.begin(),result.end());
   
   return result;
}

int main()
{
	vector<int> A;
	A.push_back(1);A.push_back(2);A.push_back(2);
	vector<vector<int> > solution=subsetsWithDup(A);
	for(int i=0;i<solution.size();i++)
{	for(int j=0;j<solution[i].size();j++)
	{cout<<solution[i][j]<<" ";
	}
	cout<<endl;
}
}


