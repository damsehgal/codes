#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define s2(a,b)						scanf("%d%d",&a,&b)
#define s3(a,b,c)					scanf("%d%d%d",&a,&b,&c)
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
int add(char a,char b){
	return (((a-'0')*10)+(b-'0'));
}
int add(char a,char b,char c){
	return (((a-'0')*100)+((b-'0')*10)+c-'0');
}
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	forall(i,0,s.length()){
		if(s[i]=='0')
		{	
			cout<<"YES\n0";
			return 0;
		}
		if(s[i]=='8')
		{	
			cout<<"YES\n8";
			return 0;
		}
				
	}
	forall(i,0,s.length()){
		forall(j,i+1,s.length())
		{
			if(add(s[i],s[j])%8==0)
			{
				cout<<"YES\n"<<add(s[i],s[j]);
				return 0;
			}
		}
	}
	forall(i,0,s.length())
	{
		forall(j,i+1,s.length())
		{
			forall(k,j+1,s.length()){
				if(add(s[i],s[j],s[k])%8==0)
				{
					cout<<"YES\n"<<add(s[i],s[j],s[k]);
					return 0;
				}	
			}
		}
	}
	cout<<"NO";
	return 0;
}