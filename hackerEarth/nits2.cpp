#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define inputN(i,a)					for(int i=0;i<a.size();i++) scanf("%d",&a[i])
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

long long int ans(std::vector<long long int>& v,int n){
	
	long long int sum1=0,sum2=0;
	std::vector<int> aalo;
	forall(i,0,n/2)
	{
		sum1+=v[i];
	}
	aalo.pb(sum1);
	forall(i,0,n/2)
	{
		aalo.pb(sum1-v[(n/2)-i-1]+v[n-i-1]);
	}
	//cout<<sum1<<" "<<sum2<<" ";
	return maximum(all(aalo));
}
int main(int argc, char const *argv[])
{
	int n,k;
	s(n);s(k);
	long long int MA=0;
		long long int lm=0;
	forall(i,0,k){
		std::vector<long long int> v(n);
		forall(j,0,n)cin>>v[j];
		lm=ans(v,n);
		if(lm>MA)MA=lm;
	}
	cout<<MA;
	return 0;
}