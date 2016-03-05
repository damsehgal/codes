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
int check(int a,int b,int c,int x,int y){
	if(a*x+b*y+c>0)return 1;
	else if(a*x+b*y+c<0)return 0;
	return -1;
}
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	std::map<int, int> Map;
	int first=0;
	int second=1;
	Map[0]++;
	Map[1]++;
	forall(i,0,10000){
		int third=(first%26+second%26)%26;
		Map[third]++;
		first=second;
		second=third;
	}


	WHILE(t){
		int l,r;
		s(l);s(r);
		forall(i,l,r){
			
		}

	}
	
	return 0;
}