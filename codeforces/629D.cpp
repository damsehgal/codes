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
long double pi=M_PI;
struct cake
{
	int number;
	int radius;
	int height;
	long double vol=pi*radius*radius*height;
};
bool compare(const cake& a,const cake& b){
	return(a.vol<b.vol && a.number < b.number);
}
int main(int argc, char const *argv[])
{
	/* code */
	int t;
	s(t);
	std::vector<cake> v(t);
	forall(i,0,t){
		v[i].number=i;
		s(v[i].radius);
		s(v[i].height);
	}
	sort(all(v),compare);
	forall(i,0,t)cout<<v[i].vol<<"\n";
	return 0;
}