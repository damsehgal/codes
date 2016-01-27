#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	stack<string>myStack;
	char a[]="{(=12332)+( ))}";
	bool ans;
	for(int i=0;i<a.length();i++){
		if((a[i]=='{') ||(a[i]=='(') ||(a[i]=='(')){
			myStack.push(a[i]);
		}
		else if((a[i]==']') ||(a[i]=='}') ||(a[i]==')')){
			if(myStack.empty()){ans=false;goto deaf;}
			else if(a[i]==']' && myStack.top()!='['){ans=false;goto deaf;}
			else if(a[i]=='}' && myStack.top()!='{'){ans=false; goto deaf;}
			else if(a[i]==')' && myStack.top()!='('){ans=false;goto deaf;}
		}
		ans=true;

	}deaf:
		cout<<ans;



	return 0;
}