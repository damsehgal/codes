#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>n>>k;
		
		std::vector<long long int> v;
		for(int i=0;i<n;i++){
			long long int lm;
			cin>>lm;
			v.push_back(lm);
			//cout<<"aalo";
		}
		long long int diff=10000000000;
		if(k==1){cout<<"0\n";goto lmn;}
		sort(v.begin(), v.end());
		
		for(int i=0;i<=(n-k);i++){
			if((v[i+k-1]-v[i])<diff)diff=v[i+k-1]-v[i];

		}
		cout<<diff<<"\n";
		lmn: ;
	}
	return 0;
}