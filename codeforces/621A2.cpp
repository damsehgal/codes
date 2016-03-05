#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<long long> v(n);
	long MinOdd=100000000001;
	long long sum=0;
	for (int i = 0; i < v.size(); ++i)
	{
		cin>>v[i];
		if(v[i]%2==0){
			sum+=v[i];
		}
		else{
			sum+=v[i];
			if(MinOdd>v[i])MinOdd=v[i];
		}
	}
	if(sum%2==0)cout<<sum;
	else cout<<sum-MinOdd;
	return 0;
}