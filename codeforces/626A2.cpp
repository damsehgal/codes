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
#define INF                         (int)100000
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
int subArraySumsZero(std::vector<int>& v) {
	int cunt=0;
	forall(i,0,v.size()){
		int sum=0;
		forall(j,i,v.size()){
			sum+=v[j];
			if(sum==0)cunt++;
		}
	}
	return cunt;
}
int main(int argc, char const *argv[])
{
	int n;s(n);
	string s;cin>>s;
	std::vector<int> v(n);
	
	forall(i,0,n){
		if(s[i]=='L')
		{
			v[i]=INF;
			//Map[v[i]]++;	
		}
		else if(s[i]=='R'){
			v[i]=-INF;
		}
		else if(s[i]=='U'){
			v[i]=1;
		}
		else if(s[i]=='D'){
			v[i]=-1;
		}
	}
	//forall(i,0,v.size())cout<<v[i]<<" ";
	cout<<subArraySumsZero(v);
	
	return 0;

}