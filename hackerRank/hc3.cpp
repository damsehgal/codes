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
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
int OR(string a, string b){
	int count=0;
    forall(i,0,a.length())
		{
			if((a[i]=='0' && b[i]=='0'));
			else count++;
		}
	return count;	
}

int main(int argc, char const *argv[]){
	int n,m;
	s(n);
	s(m);
	std::vector<string> v(n);
	std::vector<int> ans;
	forall(i,0,n)cin>>v[i];
	forall(i,0,n){
		forall(j,i+1,n){
			ans.push_back(OR(v[i],v[j]));
		}
	}
	sort(all(ans));
	int Max=ans[ans.size()-1];
	int i=ans.size()-1;
	int ANS=0;
	//forall(l,0,ans.size()-1)cout<<ans[i]<<";";
	//cout<<OR("10000","10101")<<" ;";
	while(ans[i]==Max){
		ANS++;
		i--;
	}
	cout<<Max<<"\n"<<ANS;
}
