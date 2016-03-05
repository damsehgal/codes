#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,count=0;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if((y-x)>=2)count++;

	}
	cout<<count;
	return 0;
}