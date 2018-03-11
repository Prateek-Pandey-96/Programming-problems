//check for balanced paranthesis in an expression
#include <iostream>
#include <stack>
using namespace std;
bool ispair(char a,char b)
{
	if(a=='(' && b==')')return true;
	else if(a=='[' && b==']')return true;
	else if(a=='{' && b=='}')return true;
	return false;
}
bool isbalanced(string exp)
{	stack <char> S;
	for(int i=0;i<exp.length();i++)
	{
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
		S.push(exp[i]);
		else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
		{
			if(S.empty()|| !ispair(S.top(),exp[i]))
			return false;
			else
			S.pop();
		}
	}
	return S.empty()?true:false;
}

int main(){
	string s;
	cout<<"enter a string";
	cin>>s;
	if(isbalanced(s))
	cout<<"balanced";
	else
	cout<<"unbalanced";
	return 0;
}
