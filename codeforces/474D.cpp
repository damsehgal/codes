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
#define all(a)						a.begin(), a.end()
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
struct query
{
	int left;
	int right;
};
bool compare(const query& a ,const query& b){
	return a.right<b.right;
}
int main(int argc, char const *argv[])
{
	int t,k;
	s2(t,k);
	int ans[100000+1];
	ll SUM[100000+1];
	ans[0]=0;
	forall(i,0,k){
		ans[i]=1;
	}
	std::vector<query> v(t);
	int MR=0;
	forall(i,0,t){
		s2(v[i].left,v[i].right);
		if(v[i].right>MR)MR=v[i].right;
	}
	forall(i,k,MR+1)
		ans[i]=(ans[i-1]%MOD+ans[i-k]%MOD)%MOD;
	SUM[0]=0;
	forall(i,1,MR+1)
		SUM[i]=(SUM[i-1]%MOD+ans[i]%MOD)%MOD;
	forall(i,0,t)
	{
		ll ANSS=((SUM[v[i].right])%MOD-(SUM[v[i].left-1])%MOD)%MOD;
		if (ANSS<0)ANSS+=MOD;
		printf("%I64d\n",ANSS);
	}
	return 0;
}