#include <bits/stdc++.h>
using namespace std;
struct RANGE
{
	int l;
	int r;
};
float mount(RANGE& temp,int MOD)
{
	return ceil((temp.r-temp.l)/(float)MOD);
}

int main(int argc, char const *argv[])
{
	int n,MOD;
	cin>>n>>MOD;
	std::vector<RANGE> v(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i].l>>v[i].r;
	}
	long double sum=0;
	std::vector<long long> cunt(n);
	for(int i=0;i<n-1;i++)
		cunt[i]=mount(v[i],MOD)*(mount(v[i+1],MOD));
	cunt[n-1]=mount(v[0],MOD)*mount(v[n-1],MOD);
	for (int i = 0; i < n; ++i)
	{
		cout<<cunt[i]<<" ";
		sum+=cunt[i];
	}
	sum/=pow(2,n);
	sum*=1000;
	cout<<sum;
	return 0;
}