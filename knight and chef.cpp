#include <iostream>
using namespace std;

int main() 
{
    int t;
    cout<<"enter test cases";
    cin>>t;
    for(int k=0;k<t;k++){
        int n,m,ans;
        cout<<"enter number of rows ";
        cin>>n;
        cout<<"enter the number of columns";
        cin>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {a[i][j];			}}
        
        int answer=0;
        for(int i=0;i<n;i++)
        {int c=0;
            for(int j=0;j<m;j++)
            {
              if(-1<(i+2)<n && -1<(j+1)<m)
			{
			  c++;}
              else if(-1<(i+2)<n && -1<(j-1)<m)
			 c++;
              else if(-1<(i+1)<n && -1<(j+2)<m)
			  c++;
              else if(-1<(i+1)<n && -1<(j-2)<m)
			  c++;
              else if(-1<(i-1)<n && -1<(j+2)<m)
			  c++;
              else if(-1<(i-1)<n && -1<(j-2)<m)
			 c++;
              else if(-1<(i-2)<n && -1<(j+1)<m)
			  c++;
              else if(-1<(i-2)<n && -1<(j-1)<m)
			  c++;
            }
            answer=answer+c;
        }
       
       
    }  
    return 0;
}
        
