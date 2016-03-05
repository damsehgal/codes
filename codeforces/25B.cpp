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
	int n;
	s(n);
	string a;
	cin>>a;
	if(n==2)cout<<a[0]<<a[1];
	else if(n%2==0){
		forall(i,0,n){
			cout<<a[i];
			if(i%2==1 && i<n-1)cout<<"-";
		}
	}
	else if(n==3)cout<<a[0]<<a[1]<<a[2];
	else if(n==1)cout<<a[0];
	else{
		cout<<a[0]<<a[1]<<a[2]<<"-";
		forall(i,3,n){
			cout<<a[i];
		if(i%2==0 && i<n-1)cout<<"-";
		}
	}
	return 0;
}