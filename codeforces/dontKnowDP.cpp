/*
	no of 0 in a submatrix of a biary matrix.
	//queries follow 1 based indexing
*/
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
struct query
{
	int leftx;
	int lefty;
	int rightx;
	int righty;
};
int main(int argc, char const *argv[])
{
	int rows,cols,queries;
	s3(rows,cols,queries);
	int arr[rows][cols];
	int ans[rows][cols];
	forall(i,0,rows)
	{	forall(j,0,cols)
		{
			char ch;
			cin>>ch;
			if(ch=='.')
				arr[i][j]=0;
			else
				arr[i][j]=1;
		}
	}
	std::vector<query> q(queries);
	forall(i,0,queries)
		cin>>q[i].leftx>>q[i].lefty>>q[i].rightx>>q[i].righty;
	ans[0][0]=arr[0][0];
	forall(i,0,cols)
		ans[0][i]=arr[0][i]+ans[0][i-1];
	forall(i,0,rows)
		ans[i][0]=arr[i][0]+ans[0][i-1];
	forall(i,1,cols)
		forall(j,1,cols)
			ans[i][j]=arr[i][j]+ans[i-1][j]+ans[i][j-1];
	forall(i,0,queries){
		ll ANS=(ans[q[i].rightx][q[i].righty])-(ans[q[i].leftx][q[i].righty])-(ans[q[i].rightx][q[i].lefty])+ans[q[i].leftx][q[i].lefty];
		printf("%I64d\n",ANS);
	}
			
	return 0;
}