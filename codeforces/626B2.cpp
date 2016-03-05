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
// template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
//strlate<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
string reduce(string str){
	if(str.length()==1)return str;
	if(str[0]==str[1]){
		if(str[1]=='B')
			str=str.replace(0,2,"B");
		else if(str[1]=='R')
			str=str.replace(0,2,"R");
		else if(str[1]=='G')
			str=str.replace(0,2,"G");
		
	}
	else if(str[0]=='B' && str[1]=='G')
		str=str.replace(0,2,"R");
	else if(str[0]=='B' && str[1]=='R')
		str=str.replace(0,2,"G");
	else if(str[0]=='R' && str[1]=='G')
		str=str.replace(0,2,"B");
	else if(str[1]=='B' && str[0]=='G')
		str=str.replace(0,2,"R");
	else if(str[1]=='B' && str[0]=='R')
		str=str.replace(0,2,"G");
	else if(str[1]=='R' && str[0]=='G')
		str=str.replace(0,2,"B");
	return reduce(str);

}
int main(int argc, char const *argv[])
{
	int n;
	s(n);
	string str;
	cin>>str;
	bool flag=false, flagR=false,flagB=false,flagG=false;
	sort(str.rbegin(),str.rend ());
	lm: 
	while(!next_permutation(all(str)) ||flag ){
						
			if(reduce(str)=="B")flagB=true;
			else if(reduce(str)=="G")flagG=true;
			else if(reduce(str)=="R")flagR=true;
			if(flagR && flagG && flagB)break;
		
	}
	if(!next_permutation(all(str)))
			{	sort(all(str));
			flag=true;
		goto lm;
}
		if(flagB)cout<<"B";
	if(flagG)cout<<"G";
	if(flagR)cout<<"R";
	return 0;
}