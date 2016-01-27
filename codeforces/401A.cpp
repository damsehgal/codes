#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,sum=0;
	cin>>n>>k;
	std::vector<int> v(n);
	for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];}
	if((abs(sum))%k==0)cout<<(abs(sum))/k;
	else cout<<abs(sum)/k+1;	
	
	return 0;
}
	