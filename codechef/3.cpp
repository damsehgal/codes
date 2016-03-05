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
#define FILLarr(a,n,va)				for(int i=0;i<n;i++)a[i]=va;	
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
int ANS(int x){
	int l=1,km=x;
	int count=0;

	while(x/l){
		l*=2;
		count++;
	}
	x-=pow(2,count-1);
	if(x==0)return km;
	x*=2;
	return x;
}
int main(int argc, char const *argv[])
{
	int Q;
	s(Q);
	WHILE(Q){
		long long int x;
		sl(x);
		cout<<ANS(x)<<"\n";
	}
	return 0;
}