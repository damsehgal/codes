#include <bits/stdc++.h>
using namespace std;
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
//#define sl(n)                       scanf("%lld",&n)
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
bool inIt(std::vector<int>& v,int x)
{
	forall(i,0,v.size())
	{
		if(v[i]==x)return true;
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	std::vector<int> v;
	std::map<int, int> Map;
	forall(i,0,t){
		int x;
		cin>>x;
		if(!inIt(v,x))
		v.pb(x);
		Map[x]++;
	}
	sort(all(v));
	long long ans=0;
	for(int i=v.size();i>=0;i--){
		//cout<<Map[v[i]]<<" ";
		 if(Map[v[i]]==1)
		 	ans+=v[i];
		else {
			int dummy=Map[v[i]];
			//cout<<dummy<<" " ;
			forall(j,0,dummy){
				ans+=v[i];
				v[i]--;
			}
		 }
	}
	cout<<ans;
	return 0;
}