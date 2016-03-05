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

/*.......................................Dam Sehgal.......................................*/
int main()
{
	int n,m,s=0,left=-1;
	s(n);s(m);
	string str;
	cin>>str;
   	forall(i,0,n)
   	{
		if(str[i]=='.')
		{
			if(left==-1)
			left=i;
		}
		else
		{
			if(left!=-1)
			s+=(i-left-1);
			left=-1;
		}
	}
	/*if(left>=0)
		s+=(n-left-1);*/
	forall(i,0,m)
	{
		int x;
		char ch;
		s(x);cin>>ch;
		x--;
		if(ch=='.')
		{
			if(str[x]!='.')
			{
				if(str[x-1]=='.' && (x-1)>=0)
					s++;
				if(str[x+1]=='.' && (x+1)<n)
					s++;
			}
			cout<<s<<"\n";
			str[x]='.';
		}
		else
		{
			if(str[x]=='.')
			{
				if(str[x-1]=='.' && (x-1)>=0)
					s--;
				if(str[x+1]=='.' && (x+1)<n)
					s--;
			}
			cout<<s<<"\n";
			str[x]=ch;
		}
	}
	return 0;
}