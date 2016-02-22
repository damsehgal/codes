/*
	minimum cost required to reach a point (x,y)
	given that you can travel upwards or rightwards
	from (0,0) with a given cost matrix complexity O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=(a);i<(b);i++)
#define forequal(i,a,b)				for(int i=(a);i<=(b);i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define inputN(i,a)					for(int i=0;i<a.size();i++) scanf("%d",&a[i])
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
	int x,y;
	s(x);s(y);
	int cost[x][y], ans[x][y];
	forall(i,0,x){
		forall(j,0,y){
			s(cost[i][j]);
		}
	}
	ans[0][0]=cost[0][0];
	forall(i,1,x)
		ans[i][0]=ans[i-1][0];
	forall(i,1,y)
		ans[0][i]=ans[0][i-1];
	forall(i,1,x)
		forall(j,1,y)
			ans[i][j]=min(ans[i-1][j],ans[i][j-1]);
	cout<<ans[x-1][y-1];

	return 0;
}