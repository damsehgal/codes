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
	WHILE(n){
		int t;
		s(t);
		std::vector<int> v(t);
		
		forall(i,0,t){
			s(v[i]);
		}
		int suml=0,sumr=0,i,j;
		for( i=0,j=t-1;i<j;i++,j--){
			suml+=v[i];
			sumr+=v[j];
		}
		bool flag=false;
		if(sumr>suml)
		{
			while(sumr>suml)
			{
				sumr-=v[j];
				suml+=v[j];
				if(sumr==suml)
				{
					flag=true;
					break;
				}
				j++;
			}
		}
		else if(sumr<suml){
			while(sumr>suml)
			{
				sumr+=v[i];
				suml-=v[i];
				if(sumr==suml)
				{				
					flag=true;
					break;
				}
				i--;
			}
		}
		else flag=true;
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}