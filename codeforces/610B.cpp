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
struct point 
{
	char alpha;
	int x;
	int y;
};
bool CHECK(int length,std::vector<std::vector<char> >& v,int i,int j)
{
	if(length==0)return false;
	//bool flag=true;
	forall(lm,i,length)
		if(v[lm][j-1]!=v[i][j-1])return false;
	forall(lm,i,length)
		if(v[i+length][j-lm]!=v[i][j-1])return false;
	forall(lm,i,length)
		if(v[lm][j-length-1]!=v[i][j-1])return false;
	return true;	
}
int main(int argc, char const *argv[])
{
	int r,c;
	s(r);
	s(c);
	std::vector<std::vector<char> > v;
	forall(i,0,r)
	{
		std::vector<char> dummy;
		string temp;
		cin>>temp;
		forall(j,0,c){
			dummy.pb(temp[j]);
		}
		v.pb(dummy);
	}
	forall(i,0,r)
	{
		int length=0;
		forall(j,i+1,c)
		{
			if(v[i][j]==v[i][j-1])
				length++;	
			else 
			{
				if(CHECK(length ,v,i,j))
				{

					cout<<"Yes";
					return 0;
				}
			}
		}
	}
	cout<<"No";


	return 0;
}