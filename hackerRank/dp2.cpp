#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define s2(a,b)						scanf("%d%d",&a,&b)
#define s3(a,b,c)					scanf("%d%d%d",&a,&b,&c)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%I64d",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
typedef long long ll;
typedef long double ld;
const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
int main(int argc, char const *argv[])
{
	long long n,k;
	s2(n,k);
	std::vector<long long> v(n);
	forall(i,0,n)s(v[i]);
	sort(all(v));
	long long MIN=INF,minI=0;

	for(long long i=0;i<n-k;i++){
			cout<<abs(v[i+k-1]-v[i])<<"; \n";
		if(abs(v[i+k-1]-v[i])<MIN)
		{
			MIN=abs(v[i+k-1]-v[i]);
			minI=i;
		}
	}
	ll sum=0;
	forall(i,minI,minI+k)
		forall(j,i+1,minI+k)
		{
			sum+=abs(v[i]-v[j]);
			cout<<i<<" "<<j<<" "<<v[i]<<" "<<v[j]<<"\n";
		}	
	cout<<sum;
	return 0;
}