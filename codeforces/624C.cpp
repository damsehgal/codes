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
bool ifSame(std::vector<bool>& v1,std::vector<bool> v2,int l1,int l2){
	for(int i=0;i<v1.size();i++){
		if(v1[i]!=v2[i] && i!=l1 && i!=l2)
			return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	string s="";
	char c[n];
	c[0]='a';
	int count=0;
	vector<vector <bool> >arr;
	forall(i,0,n){
		std::vector<bool> v(n);
		forall(j,0,n)v[j]=false;
		arr.pb(v);
	}
	forall(i,0,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		arr[a][b]=true;
		arr[b][a]=true;
	}
	forall(i,0,n){forall(j,0,n){cout<<arr[i][j]<<" ";}cout<<"\n";}
	char current='a';
	forall(i,0,n){
		forall(j,i+1,n){
			if(ifSame(arr[i],arr[j],i,j))
			{
			
				c[j]=c[i];
			}
			else {
				cout<<i<<" ;"<<j<<" "<<	current<<"\n";
				c[j]=current;
				current++;
				
				count++;
			}
			
		}
	}
	if(count>3){cout<<"No";forall(i,0,n)cout<<c[i];}
	else {
		cout<<"Yes\n";
		forall(i,0,n)cout<<c[i];
	}
	return 0;
}
	
