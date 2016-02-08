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
int main(int argc, char const *argv[])
{
	long long int n,a,b,c;
	cin>>n>>a>>b>>c;
	if(a>n && b>n)cout<<0;
	if(b<=n){
	if(a<=b-c){
		cout<<n/a;
	}
	else if(a>b-c)
	{int cunt=0,curr=b;
		// while(n>=curr){
		// 	cunt++;
		// 	n-=n/(b-c);
		// 	//cout<<n<<";";
		// }
		if(n-((n-b)/(b-c))>=b)
			cout<<(n-b)/(b-c)+1;
		else cout<<(n-b)/(b-c);
		}
	}
	if(a<n && b>n){
		cout<<n/a;
	}

	return 0;
}