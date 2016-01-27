#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k,sum=0;
		cin>>n>>k;
		std::vector<int> v(n);
		for(int i=0;i<n;i++){cin>>v[i];sum+=v[i];v[i]=k%v[i];}
		int min=v[0];
		for(int i=0;i<n;i++){
			if(min>v[i])min=v[i];
		}
		if(sum<=k){
			cout<<max(k-min,sum)<<"\n";	
		}
		else cout<<k-min<<"\n";
	}
	return 0;
}