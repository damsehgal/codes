#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,a,b,count=0;

	cin>>n>>m;
	for(int a=0;(a*a)<=n;a++){
		for(int b=0;(b*b)<=m;b++){
			if(a*a+b==n && a+b*b==m)
				count++;
		}
	}
	cout<<count;	
	return 0;
}