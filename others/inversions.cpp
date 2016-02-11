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
int cunt=0;
void MERGE(std::vector<int>& v,std::vector<int>& a,std::vector<int>& b){
	int i=0,j=0,k=0;
	while(i<a.size()&& j<b.size())
	{
		if(a[i]<b[j])
		{
			v[k]=a[i];
			i++;
		}
		else{
			cunt+=a.size()-i;
			v[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<a.size()){
		v[k]=a[i];
		i++;
		k++;
	}
	while(j<b.size()){
		v[k]=b[j];
		j++;
		k++;
	}
	
}
void MERGESORT(std::vector<int>& v){
	if(v.size()<2)return ;
	int mid=v.size()/2;
	std::vector<int> l(mid),r(v.size()-mid);
	for(int i=0;i<mid;i++)l[i]=v[i];
	for(int i=mid,k=0;i<v.size();i++,k++)r[k]=v[i];
	MERGESORT(l);
	MERGESORT(r);
	MERGE(v,l,r);
}



int main(int argc, char const *argv[])
{	int n;
	s(n);
	std::vector<int> v(n);
	forall(i,0,n)s(v[i]);	
	MERGESORT(v);
	cout<<cunt;
	return 0;
}