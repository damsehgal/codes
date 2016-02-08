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
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
long long sub(long long prev,int a2,int a3,int a4,int a5,int s){
		if(s==0)
		return (((prev/a2)*a3)+a4)-a5;
		if(s==1)
		return (((prev*a2)+a3)-a4)/a5;
		if(s==2)
		return (((prev+a2)-a3)/a4)*a5;
		if(s==3)
		return (((prev-a2)/a3)*a4)+a5;
}
//NOTE->there is problem in sub2 because I was taking 5 at a time but actually
//taking 4 at a time;
long long sub2(long long prev,int l ,std::vector<int>& v){
	// cout<<l<<" ";
	if(v.size()%5==1){
		if(l%4==0)
			return prev/v[v.size()-1];
		if(l%4==1)
		 return prev*v[v.size()-1];
		if(l%4==2)
			return prev+v[v.size()-1];
		return prev-v[v.size()-1];
	}
	if(v.size()%5==2){
		if(l%4==0){
			return (prev/v[v.size()-2])*v[v.size()-1];
		}
		if(l%4==1)
		{
			return prev*v[v.size()-2]+v[v.size()-1];
		}
		if(l%4==2){
			return prev+v[v.size()-2]-v[v.size()-1];	
		}
		return prev-v[v.size()-2]/v[v.size()-1];
	}
	if(v.size()%5==3){
		if(l%4==0){
			return (prev/v[v.size()-3])*v[v.size()-2]+v[v.size()-1];
		}
		if(l%4==1)
		{
			return (prev*v[v.size()-3])+v[v.size()-2]-v[v.size()-1];
		}
		if(l%4==2){
			return ((prev+v[v.size()-3])-v[v.size()-2])/v[v.size()-1];	
		}
		return ((prev-v[v.size()-3])/v[v.size()-2])*v[v.size()-1];
	}
	if(l%4==0){
			// cout<<"AALO"<<v.size()<<" ";
			return ((prev/v[v.size()-4])*v[v.size()-3])+v[v.size()-2]-v[v.size()-1];
		}
		if(l%4==1)
		{
			return (((prev*v[v.size()-4])+v[v.size()-3])-v[v.size()-2])/v[v.size()-1];
		}
		if(l%4==2){
			return (((prev+v[v.size()-4])-v[v.size()-3])/v[v.size()-2])*v[v.size()-1];	
		}
		 return (((prev-v[v.size()-4])/v[v.size()-3])*v[v.size()-2])+v[v.size()-1];
}
long long ans(std::vector<int>& v){
	long long prev=v[0];
	int l=v.size()/5;
	for(int i=0;i<l;i++){
		prev=sub(prev,v[(4*i)+1],v[(4*i)+2],v[(4*i)+3],v[(4*i)+4],i);
	}
	if(v.size()%5==0)
		return prev;
	else if(v.size()>5){
		cout<<sub2(prev,l,v);
		prev=sub2(prev,l,v);

		return prev;
	}
	else{
		if(v.size()==4)
			return ((v[0]/v[1])*v[2])+v[3];
		if(v.size()==3)
			return ((v[0]/v[1])*v[2]);
		if(v.size()==2)
			return v[0]/v[1];
		return v[0];
	}
	
}
int main(int argc, char const *argv[])
{
	int t;
	s(t);
	WHILE(t){
		int n;
		s(n);
		std::vector<int> v(n);
		forall(i,0,n)s(v[i]);
		cout<<ans(v)<<"\n";
	}
	return 0;
}