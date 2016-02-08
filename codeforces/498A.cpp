#include <bits/stdc++.h>
using namespace std;

bool check(long long a,long long b,long long c,long long x1	,long long y1,long long x2,long long y2){
	if((a*x1 + b*y1 + c)<0 && (a*x2 + b*y2 + c)>0)
		return true;
	if((a*x1 + b*y1 + c)>0 && (a*x2 + b*y2 + c)<0)
		return true;
	return false;
}
int main(int argc, char const *argv[])
{
	long long x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	long long t;
	cin>>t;
	long long count=0;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		if(check(a,b,c,x1,y1,x2,y2))
			count++;
	}
	cout<<count;
	return 0;
}