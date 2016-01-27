#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,s;
	cin>>n>>k>>s;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int lm;cin>>lm;
		v.push_back(lm);
	}
	sort(v.begin(),v.end());
	int sum=0,count=0;
	for(int i=n-1;sum<(k*s);i--){
		sum+=v[i];
		count++;
	}
	cout<<count;
	return 0;
}