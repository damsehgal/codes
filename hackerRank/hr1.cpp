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
int main(int argc, char const *argv[])
{
	int n;
	s(n);
	long long vol=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j+i < n; j++)
		{
			/* code */
			if((i*j*(n-(i+j)))>vol)
				vol=(i*j*(n-(i+j)));
		}
	}
		cout<<vol;
	return 0;
	
}