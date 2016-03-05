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
int shuffle(int x){
	int a5=x%10;
	x/=10;
	int a4=x%10;
	x/=10;
	int a3=x%10;
	x/=10;
	int a2=x%10;
	x/=10;
	int a1=x%10;
	x/=10;
	int ans=a1*10000+a3*1000+a5*100+a4*10+a2;
	return ans;

}
int main(int argc, char const *argv[])
{
	/* code */
	int n;cin>>n;
	long long ans=modpow((long long)shuffle(n),5,100000);
	if(ans/10==0)
		cout<<"0000"<<ans;
	else if(ans/100==0)
		cout<<"000"<<ans;
	else if(ans/1000==0)
		cout<<"00"<<ans;
	else if(ans/10000==0)
		cout<<"0"<<ans;
	else cout<<ans;
	return 0;
}