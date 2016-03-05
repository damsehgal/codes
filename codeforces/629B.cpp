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
#define ; ;
struct Friend
{
	char G;
	int left;
	int right;
};
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	std::vector<Friend> v(t);
	forall(i,0,t)
		cin>>v[i].G>>v[i].left>>v[i].right;
	int Max=0;
	forall(i,1,367){
		int cunt,M1=0,M2=0;
		forall(j,0,t)
		{
			if(v[j].left<=i && v[j].right>=i)
			{
				if(v[j].G=='M')
					M1++;
				else
					M2++;
			}
		}
		cunt=2*min(M1,M2);
		
		if(Max<cunt)Max=cunt;
	}
	cout<<Max;
	return 0;
}