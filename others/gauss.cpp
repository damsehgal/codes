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
	int n;
float sum(int i,std::vector<std::vector<float> >& v,std::vector<float>& ans){
	float sum=0;
	forall(j,i+1,n){
		sum+=v[i][j]*ans[j];
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	s(n);
	std::vector<std::vector<float> > v(n);
	std::vector<float> ans(n);
	forall(i,0,n)
	{
		std::vector<float> temp(n+1);
		forall(j,0,n+1){
			cin>>temp[j];
		}
		v[i]=temp;
	}
	/*forall() now make upper triangular matrix*/
	
	forall(i,1,n){
		forall(j,0,n+1){
			v[i][j]-=((v[i][0]/v[0][0])*v[0][j]);
		}
	}
	forall(j,0,n+1){
		v[2][j]-=(v[2][1]/v[1][1])*v[1][j];
	}
	ans[2]=v[2][2];
	forall(i,0,n){
		ans[i]=(1/(v[i][i]))*(v[i][n])-sum(i,v,ans);
	}
	forall(i,0,ans.size())cout<<ans[i]<<" ";
	return 0;
}