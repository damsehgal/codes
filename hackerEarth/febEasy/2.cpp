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
struct PROB
{
	float div;
	float lc;
};
std::vector<float> calc(PROB a){
	std::vector<float> v;
	float a=(n*(n+1)*(2*n+1))/(6*k*k);
	forall(i,0,div){
		v.push_back((a*i*i)/(k*k));
	}	
	return v;
}
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	std::vector<PROB> v(t);
	forall(i,0,t)
	{
		sf(v[i].div);
		sf(v[i].lc);
	}
	std::vector<std::vector<float> > ans;
	forall(i,0,t){
		std::vector<float> dummy=calc(v[i]);
		ans.push_back(dummy);
	}
	float tot=0;
	for(int i=0;i<t;i++){
		for(int j=0;j<a[i].size();j++)
		{
			
		}
	}	
	return 0;
}