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
	string str;
	cin>>str;
	bool flagR=false,flagB=false,flagG=false;
	forall(i,0,n){
		for(int j=0;j!=i && j<n;j++){
			if(str[i]==str[j])
			{
				if(str[i]=='B')
					flagB=true;
				else if(str[i]=='R')
				{
					flagR=true;
				}
				else if(str[i]=='G')
				{
					flagG=true;
				}
			}
			else if(str[i]=='B' && str[j]=='G')
			{
				flagR=true;
			}
			else if(str[i]=='B' && str[j]=='R')
			{
				flagG=true;
			}
				else if(str[i]=='G' && str[j]=='R')
			{
				flagB=true;
			}
				
		}
	}
	if(flagB)cout<<"B";
	if(flagG)cout<<"G";
	if(flagR)cout<<"R";
	return 0;
}