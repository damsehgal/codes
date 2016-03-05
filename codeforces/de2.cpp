#include <bits/stdc++.h>
using namespace std;
	
int main(int argc, char const *argv[])
{
	long long int n,m;
	cin>>n>>m;
	unsigned long long int sum=0;
	for(int i=1;i<=m;i++){
		sum+=n%i;
	}
	sum%=1000000007;
	cout<<sum;
	return 0;
}