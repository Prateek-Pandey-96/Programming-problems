#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
double findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
  vector<int> c;
  int m=A.size();
  int n=B.size();
  for(int i=0;i<m;i++){c.push_back(A[i]);}
  for(int i=m;i<m+n;i++){c.push_back(B[i]);}
  
   sort(c.begin(),c.end());
  
  double median;
  int z=c.size();
  
  if(z%2==0)
  median=(c[z/2]+c[(z/2)-1])/2.0;
  else
  median=c[z/2];
  
  
  return median;
}
int main()
{	int n;
	vector<int> A;
	cout<<"enter array size"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	int m;
	vector<int> B;
	cout<<"enter array size"<<endl;
	cin>>m;
	for(int i=0;i<m;i++)cin>>B[i];
	int ans=findMedianSortedArrays(A,B);
	cout<<ans;
	}
