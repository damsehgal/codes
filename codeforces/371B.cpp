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
	int x,y;
	s(x);s(y);
	if(x==y)cout<<0;
	else{
		int gcd=__gcd(x,y);
		else {int cnt=0;
			int lm=y/gcd;
			int mn=x/gcd;
			
			while(lm%2==0){lm/=2;cnt++;}
			while(lm%5==0){lm/=5;cnt++;}
			while(lm%3==0){lm/=3;cnt++;}
			while(mn%2==0){mn/=2;cnt++;}
			while(mn%5==0){mn/=5;cnt++;}
			while(mn%3==0){mn/=3;cnt++;}
			cout<<cnt;
			 // if(!(lm%2==0 || lm%5==0 || lm%3==0))
			 // 	{cout<<-1;
			 // 	return 0;}
			 //  if(!(mn%2==0 || mn%5==0 || mn%3==0))
			 // 	{cout<<-1;
			 // 	return 0;}	
		}
	}
	return 0;
}