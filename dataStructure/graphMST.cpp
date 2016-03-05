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
	int n,q;
	s(n);
	long long v[n][n];
	forall(i,0,n)forall(j,0,n)v[i][j]=INF;

	s(q);
	forall(i,0,q){
		int a,b,dist;
		s(a);s(b);s(dist);
		a--;
		b--;
		v[a][b]=dist;
		v[b][a]=dist;
	}
	//forall(i,0,n){forall(j,0,n){cout<<v[i][j]<<" ";}cout<<"\n";}
	long sum=0;
	std::vector<int> a;
	a.pb(0);
	for (int i = 0; i < n; ++i)
	{	int min=INF-1,minI=-1;
		forall(lm,0,a.size()){
			//cout<<a[lm]<<" ";
			for (int j = 1; j < n; j++)
			{
				cout<<v[a[lm]][j]<<" ";	
				if(v[a[lm]][j]<min)
				{	
					min=v[a[lm]][j];
					minI=j;
					//cout<<minI<<" ;";
				}
				//cout<<v[a[lm]][j]<<" ;";
			}
		}
			if(minI!=-1){a.pb(minI);
			forall(ka,0,n)v[minI][ka]=INF;
			}
			else break;	
			cout<<"\n";
			//cout<<" "<<minI<<"\n";		
			
		
		
		
			sum+=min;

			
	}
	cout<<sum;
	return 0;
}