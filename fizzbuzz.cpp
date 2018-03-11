#include <iostream>
#include <string>
using namespace std;
vector<string> solution::fizzbuzz(int A)
{
vector<string> a;
 for(int i=1;i<=A;i++)
    {   
        if(i%3!=0 && i%5!=0)
        {
            a.push_back(i);
        }
         else if(i%3==0 && i%5==0)
        {
            a.push_back("fizzbuzz");
        }
        else if(i%3==0)
        {
            a.push_back("fizz");
        }
        else if(i%5==0)
        {
            a.push_back("buzz");
        }
        
    }
    return a;
}
int main()
{
	int n;
	cin>>n;
	vector<string> a=fizzbuzz(n);
	
}
