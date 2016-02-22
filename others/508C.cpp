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
int main(int argc, char const *argv[])
{
	int ghost,time,candle;
	s(ghost);s(time);s(candle);
	int sum=0;
	std::vector<int> v(ghost),cum(ghost,0);
		
	forall(i,1,ghost){
		s(v[i-1]);
		sum+=v[i-1];
		cum[i]+=sum;
	}
	
	if(ghost==1){
		if(time<candle)cout<<-1;
		else cout<<candle;
	}
	else{
		int temp=v[0]-(candle);
		int i=0,cunt=0,lambda=0;
		while(i<ghost)
		{	cout<<temp<<";"<<v[i]<<"\n";
			if(temp>v[i])
				i++;
			else if(v[i+1]-temp>time){
				temp=v[i+1]-(candle-1);
				i++;
				cunt+=candle;
				cout<<"aalo\n";
			}
			else 
			{	
				if(v[i+1]+time>v[ghost-1]){
					temp+=v[ghost-1]-v[i+1];
					cunt+=candle-(v[i+1]+time-v[ghost-1]);
					lambda++;
					if(lambda>10)return 0;
					i++;
					cout<<"annsalkaadslnlas";
				}
				else{	
					temp+=time;
					cunt+=candle;
				}
			}
		}
		cout<<cunt;
	}
	return 0;
}