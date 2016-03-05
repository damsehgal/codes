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
int max1(int count,std::vector<std::vector<int> > v){
	for(int j=0;j<v.size();j++)
	{
		for(int k=0;k<v[j].size();k++)
		{
			
		}			
	}
}
int main(int argc, char const *argv[])
{
	int l,r,q,count1=0,count0=0;
	s(l);s(q);s(r);
	std::vector<std::vector<int> > v(l);
	forall(i,0,r){
		std::vector<int> temp(r);
		char c;
		forall(j,0,l){sc(c);
			if(c=='M'){temp[j]=1;count1++;}
			else {temp[j]=0;count0++;}
		}
		v[i]=temp;
	}	
	int ka=max1(count1,v);
	return 0;
}