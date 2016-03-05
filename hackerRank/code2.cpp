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

int F[1047][1047];
 

void update(int x, int y, int v) {
	
			F[x-1][y-1]+=v;
}
 
int getRect(int x1, int y1, int x2, int y2) {
	int sum=0;
	forall(i,x1,x2+1)
	{
		forall(j,y1,y2+1)
		{
			sum+=F[i][j];
			cout<<F[i][j]<<" ";
		}
	}
	return sum;
}
 
int main() {
	int tt;
	s(tt);
	WHILE(tt){
	int n,t;
	s(n);s(t);
	forall(i,0,n){
		forall(j,0,n){
			s(F[i][j]);
		}
	}
	forall(i,0,t){
		char S;
		cin>>S;
		int x,y,x1,y1,val;
		if(S=='U'){
			s(x);(y);s(val);
			update(x-1,y-1,val);
		}
		else{
			s(x);(y);s(x1);s(y1);
			cout<<"\n"<<getRect(x-1,y-1,x1-1,y1-1);
		}
	  	}
	}
	return 0;
}