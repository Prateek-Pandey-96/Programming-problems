#include <iostream>
using namespace std;
int main(){
	int t,r;
	int x1,x2,x3;
	int y1,y2,y3;
	int a,b,c;	
	cout<<"enter the number of cases";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"enter the range";
		cin>>r;
		cout<<"enter the x and y coordinates respesctively of chef";
		cin>>x1;
		cin>>y1;
		cout<<"enter the x and y coordinates respesctively of ast-chef";
		cin>>x2;
		cin>>y2;
		cout<<"enter the x and y coordinates respesctively of third";
		cin>>x3;
		cin>>y3;
	    a=(x2-x1)^2+(y2-y1)^2;
	    b=(x2-x3)^2+(y2-y3)^2;
	    c=(x3-x1)^2+(y3-y1)^2;
	    if(a<=r*r && b<=r*r && c<=r*r)
		cout<<"yes";
		else
		cout<<"no";	
}
	
}

