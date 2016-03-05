#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int sum=(n*(n+1))/2;
	int ans=m%sum;
	int i;
	for(i=1;ans>0;++i){
		ans-=i;
		if(ans==0){cout<<"0";goto lm;}
	}
	cout<<ans+i-1;
	lm: ;
	return 0;
}