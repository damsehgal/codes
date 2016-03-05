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
struct point
{
	int up;
	int right;
};
bool equals(const point& a ,const point& b){
	if(a.up==b.up && a.right==b.right)return true;
	return false;

}
int cunt(std::vector<point>& v ,point temp){
	int cnt=0;
	forall(i,0,v.size())
		if(equals(v[i],temp))cnt++;
	return cnt;
}
int main(int argc, char const *argv[])
{
	int n;s(n);
	string s;cin>>s;
	std::vector<point> v(n+1);
	v[0].up=0;
	v[0].right=0;
	forall(i,0,n){
		if(s[i]=='L')
		{
			v[i+1].right=v[i].right-1;
			v[i+1].up=v[i].up;
			//Map[v[i+1]]++;	
		}
		else if(s[i]=='R'){
			v[i+1].right=v[i].right+1;
			v[i+1].up=v[i].up;	
		
		}
		else if(s[i]=='U'){
			v[i+1].up=v[i].up+1;
			v[i+1].right=v[i].right;	
			
		}
		else if(s[i]=='D'){
			v[i+1].up=v[i].up-1;
			v[i+1].right=v[i].right;	
			
		}
	}
	forall(i,0,n+1){
		cout<<v[i].up<<" "<<v[i].right<<" "<<cunt(v,v[i])<<"\n";
	}
	
	return 0;
}