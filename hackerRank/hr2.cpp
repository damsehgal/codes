#include <bits/stdc++.h>
using namespace std;
/*#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define forall(i,a,b)               for( int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define WHILE(n)					while(n--)
#define INF                         (int)1e9
#define pb                          push_back
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }*/
long long ANS(long long l,long long r,std::vector<long long>& v){
	long long ans=0;
	for (long long i = l; i < r; ++i)
	{
		/* code */
		ans^=v[i];
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	std::vector<long long> v(100000);
	for(long long i=0;i<100000;i++){
		long long aloo=i%4;
		if(aloo==0)v[i]=i;
		else if(aloo==1)v[i]=1;
		else if(aloo==2)v[i]=i;
		else v[i]=0;
	}

	int t;cin>>t;
	
	
	while(t--){
		long long l,r;
		cin>>l>>r;
        
		cout<<ANS(l,r,v)<<"\n";
	}
	return 0;
}