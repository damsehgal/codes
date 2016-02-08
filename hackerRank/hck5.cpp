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
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
struct order
{
	int ti;
	int dt;
	int index;
};
bool compare(const order& a,const order& b){
	if((a.ti+a.dt)!=(b.ti+b.dt))
		return (a.ti+a.dt)<(b.ti+b.dt);
	return a.index<b.index;
}
int main(int argc, char const *argv[])
{
	int n;
	s(n);
	std::vector<order> v(n);
	forall(i,0,n)
	{
		cin>>v[i].ti>>v[i].dt;
		v[i].index=i+1;
	}
	sort(all(v),compare);
	forall(i,0,n)
		cout<<v[i].index<<" ";	
	return 0;
}