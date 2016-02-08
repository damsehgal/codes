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
bool IsPrime(int n){
	if(n<2)return false;
	if(n==2 || n==3 )return true;
	if(n%2==0)return false;
	if(!(n%6==1 || n%6==5))return false;
	forall(i,5,(int)sqrt(n)+1){
		if(n%i==0)return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int t;
	WHILE(t){
	s(t);
	int a, b,c;
		s(a);s(b);s(c);
		int n,S1=0,S2=0;
		s(n);

		forall(i,0,n){
			int x,y;
			if(a*x+b*y+c>0)S1++;
			else if(a*x+b*y+c<0)S2++;
			else {S1++;S2++;}
		}
		cout<<max(S1,S2)<<"\n";

	}
	return 0;
}