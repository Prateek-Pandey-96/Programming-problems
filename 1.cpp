#include <iostream>
using namespace std;
int main()
{
int N,M;
cout<<"enter the number of cities and roads";
cin>>N;
cin>>M;
int a[N][M];
int c=0;
cout<<"enter the constraints";
for(int i=0;i<M;i++)
{
for(int j=0;j<4;j++)
{
cin>>a[i][j];
}
if(a[i][2]==0)
{
cout<<"road is  fine";}
else if(a[i][2]==1)
{cout<<"repairing needed";
if((a[i][1]-a[i][0])==1||(a[i][0]==1&&a[i][1]==N))
c=c+a[i][3];
}}
cout<<"the minimum cost is"<<" "<<c;
}
 
