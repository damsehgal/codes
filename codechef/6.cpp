#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
long long SmallC(int n, int r, int MOD)
{
	vector< vector<long long> > C(2,vector<long long> (r+1,0));

	for (int i=0; i<=n; i++)
	{
		for (int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i&1][k] = 1;
			else
				C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
	}
	return C[n&1][r];
}

long long Lucas(int n, int m, int p)
{
	if (n==0 && m==0) return 1;
	int ni = n % p;
	int mi = m % p;
	if (mi>ni) return 0;
	return Lucas(n/p, m/p, p) * SmallC(ni, mi, p);
}

long long C(int n, int r, int MOD)
{
	return Lucas(n, r, MOD);
}

long long modpow(long long base, long long exp, long long modulus) {
  base %= modulus;
  long long result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
int main()
{
    int t;
    s(t);
    WHILE(t){
    	int n,q;
    	s(n);s(q);
    	WHILE(q){
    		long long k,l;
    		sl(l);sl(k);
    		if(k>l)cout<<0<<"\n";
    		else if(k==l)
    			
    			printf("%lld\n",modpow(2,n-l,1000000007)%1000000007);
    		else {
    			long long ans1=modpow(2,n-l,1000000007)%1000000007;
    			long long ans2=C(l-1,k-1,1000000007)%1000000007;
    			//cout<<ans1<<"   "<<ans2<<"   "; 
    			long long ans=(ans2*ans1)%1000000007;
    			printf("%lld\n",ans );
    		}
    	}
    }
}