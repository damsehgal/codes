#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a1,a2,a3,a4;
	long long int res=0;
	cin>>a1>>a2>>a3>>a4;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='1')res+=a1;
		else if(str[i]=='2')res+=a2;
		else if(str[i]=='3')res+=a3;
		else res+=a4;
	}
	cout<<res;
	return 0;
}
