#include <bits/stdc++.h>
using namespace std;
	
int main(int argc, char const *argv[])
{
	int t,count=0;
	cin>>t;
	string a;
	cin>>a;
	char d=a[0];
	for(int i=1;i<t;i++){
		if(a[i]==d)count++;
		else(d=a[i]);
	}
	cout<<count;
	return 0;

}