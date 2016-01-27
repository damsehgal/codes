#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
bool IsChar(string a){
	if((a=="(") || (a==")")||(a=="+")||(a=="-")||(a=="*")||(a=="/")||(a=="^"))return false;
	return true;
}
bool IsPres(string up,string down){
	if(up=="(")return true;
	if(up=="^"&& down==
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		stack<char>s1;
		string b="";
		for(int i=1;i<a.length()-1;i++){
			if(IsChar(a[i]))b+=a[i];
			else while()
		}
	}
	return 0;
}
	