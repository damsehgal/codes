#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a1,b1;
	cin>>a1>>b1;
	for(int i=0;i<a1.length();i++){
		a1[i]=tolower(a1[i]);
		b1[i]=tolower(b1[i]);
	}
	if(a1<b1)cout<<"-1";

	else cout<<(a1>b1);
	return 0;
}