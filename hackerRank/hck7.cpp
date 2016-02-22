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
	int t;
	s(t);
	WHILE(t){
		int n;
		s(n);
		std::vector<int> v(n);
		forall(i,0,n)s(v[i]);
		sort(all(v));
        vector<int>temp(v);
		int i=n-1,cunt=0;
		while(i){
			if(v[i]-v[0]>=5)
            {
                v[i]-=5;
                cunt++;
            }
            else if(v[i]-v[0]>=2 &&v[i]-v[0]<5)
            {
                v[i]-=2;
                cunt++;
            }
			else if(v[i]!=v[0])
            {   cunt++;
                v[i]--;
            }
			if(v[i]==v[0])i--;
		}	
        int j=0,cunt2=0;
        while(j<n){
            if(temp[n-1]-temp[j]>=5)
            {
                cunt2++;
                temp[j]+=5;
            }
            else if(temp[n-1]-temp[j]>=2 &&temp[n-1]-temp[j]<5)
            {
                temp[j]+=2;
                cunt2++;
            }
            else if(temp[n-1]!=temp[j]){
                temp[j]--;
                cunt2++;
            }
            else j++;
        }
		cout<<min(cunt,cunt2)<<"\n";
	}
	return 0;
}