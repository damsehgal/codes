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
int main(int argc, char const *argv[])
{
	int ghost,time,candle;
	s(ghost);s(time);s(candle);
	int sum=0;
	std::vector<int> v(ghost);
		
	forall(i,0,ghost){
		s(v[i]);
		sum+=v[i];
	}
	std::vector<int> lighted(((v[0]-candle)+v[ghost-1]),0);

	if(ghost==1){
		if(time<candle)cout<<-1;
		else cout<<candle;
	}
	forall(i,0,ghost){
		forall(j,0,time){
			if(lighted[v[i]-j]!=1)
		}
	}
	return 0;
}