#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	char l[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int m[26];for (int i = 0; i < 26; ++i)
	{
		m[i]=0;
	}
	for(int i=0;i<a.length();i++){
		for(int j=0;j<26;j++){
			if(a[i]==l[j])m[j]++;
		}
	}
	int count=0;
	for(int i=0;i<26;i++)
	{
		if(m[i]>0)count++;
	}
	if(count%2==0){
		cout<<"CHAT WITH HER!";
	}
	else cout<<"IGNORE HIM!";
	return 0;
}
