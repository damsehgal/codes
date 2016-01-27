#include<bits/stdc++.h>
uing namespace std;

int main(){
	string s;
	map<char,int> a;
	cin>>s;
	for(int i=0;i<s.length();i++){
		a[s[i]]++;
	}
	return 0;
}
