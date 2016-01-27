#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		std::vector<int> v(n),v2(n);
		for(int i=0;i<n;i++){cin>>v[i];v2[i]=k%v[i];}
		int min=v2[0];
		for(int i=0;i<n;i++){
			if(min>v2[i])min=v2[i];
		}
		if(min==0){cout<<k<<"\n";continue;}
		else{
			//14->5->9
			for(int i=0;)
		}	

	}
	return 0;
}