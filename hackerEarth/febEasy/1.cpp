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
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	WHILE(t){
		int n,sum=0;
		s(n);
		std::vector<int> v(n);
		forall(i,0,n){s(v[i]);sum+=v[i];}
		sort(all(v));
		cout<<v[0]<<" "<<sum-n<<"\n";
	}
	return 0;
}