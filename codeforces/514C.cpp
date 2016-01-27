#include <bits/stdc++.h>
using namespace std;
bool check(string s,std::vector<string> v){
	for(int i=0;i<v.size();i++){
		if(v[i]==s)return true;
	}
	return false;
}
bool SinArrray(std::vector<string> v,string s){
	for(int i=0;i<s.length();i++){
		if(s[i]=='a')
		{
			s[i]='b';
			//cout<<s<<" ";
			if(check(s,v))return true;
			s[i]='c';
			if(check(s,v))return true;
			s[i]='a';

		}
		else if(s[i]=='b'){
		
			s[i]='a';
			if(check(s,v))return true;
			s[i]='c';
			if(check(s,v))return true;
			s[i]='b';
		}
		else
		{
			s[i]='b';
			if(check(s,v))return true;
			s[i]='a';
			if(check(s,v))return true;
			s[i]='c';
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	std::vector<string> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	while(m--){
		string s;
		cin>>s;
		
			if(SinArrray(v,s))
				cout<<"YES\n";
			else 
				cout<<"NO\n";
		
	}	
	return 0;
}