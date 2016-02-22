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
int NC2 (int n)
{
	return (n*(n-1))/2;
}
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	std::vector<std::vector<int> > v(t);
	forall(i,0,t){
		std::vector<int> temp(t);
		forall(j,0,t){
			char c;
			cin>>c;
			if(c=='C')
				temp[j]=1;
			else
				temp[j]=0;
		}
		v[i]=temp;
	}
	long long sum=0;
	forall(i,0,t)
	{
		int cumt=0;
		forall(j,0,t){
			if(v[i][j]==1)
				cumt++;
		}
		cumt=NC2(cumt);
		sum+=cumt;	
	}
	forall(i,0,t){
		int cumt=0;
		forall(j,0,t){
			if(v[j][i]==1)
				cumt++;
		}
		cumt=NC2(cumt);
		sum+=cumt;
	}
	cout<<sum;
	return 0;
}