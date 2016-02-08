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
struct Plant
{
	int data;
	int index;
};
bool isSorted(std::vector<Plant>& v){
	forall(i,0,v.size()-2)
		if(v[i].data<v[i+1].data)
			return false;
	return true;	
}
int main(int argc, char const *argv[])
{
	int n,c=0,d=-1;
    cin>>n;
	std::vector<int> v(n);
    forall(i,0,n)
        s(v[i]);
    while(c==0)
    {
        c=1;
        d++;
        for(int i=n-1;i>0;i--)
        {
            if(v[i]>v[i-1])
            {
                c=0;
                for(int j=i;j<n;j++)
                    v[j]=v[j+1];
                n--;
            }
        }
    }
    cout<<d;
    return 0;
}
