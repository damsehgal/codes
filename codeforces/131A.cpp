#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	bool flag;
	
	string s;
	cin>>s;
	for(int i=1;i<s.length();i++){
		if(toupper(s[i])==s[i]){
			flag=true;
		}
		else {flag=false;break;}
	}
	if(flag){
		if(tolower(s[0])==s[0]){
			s[0]=toupper(s[0]);
			for(int i=1;i<s.length();i++)s[i]=tolower(s[i]);
				cout<<s;
		}
		else {
			for(int i=0;i<s.length();i++)s[i]=tolower(s[i]);
				cout<<s;
		}
	}
	else cout<<s;
	
	return 0;
}
	