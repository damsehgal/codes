/*
	Finding the number of ways to reach a particular position in a grid
	from a starting position (given some cells which are blocked)
*/
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
	int m,n,p;
	s(m);s(n);s(p);
	int arr[m+1][n+1];
	forall(i,0,p){
		int x,y;
		s(x);s(y);
		arr[x-1][y-1]=0;
	}
	if(!arr[0][0])
	{
		cout<<0;
		return 0;
	}
	arr[0][0]=1;
	forall(i,0,m+1){
		if(arr[i-1][0]=0)
			arr[i][0]=0;
		else
			arr[i][0]=1;
	}
	forall(i,0,n+1){
		if(arr[0][i]=0)
			arr[0][i]=0;
		else
			arr[0][i]=1;
	}
	forall(i,1,m+1)
		forall(j,1,n+1)
			arr[i][j]=((arr[i-1][j])%MOD+(arr[j-1][i])%MOD)%MOD;
	cout<<arr[m][n];		
	return 0;
}