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
int n;
vector<int>next(n+1,-1),parent(n+1,-1);
int get_next(unsigned int index){
if(index>n+1)return -1;
	if(next[index]!=-1)return next[index];
	else 
		return next[index]=((~index+1)&index)+index;
}
int get_parent(unsigned int index){
if(index>n+1 || index==0 )return -1;
if(parent[index]!=-1)return parent[index];
	else 
		return parent[index]=((~index+1)&index)-index;
} 
void add(std::vector<int>& tree,int i,std::vector<int>& v){
	while(get_next(i+1)!=-1)
	{
		tree[i+1]+=v[i];
		i=get_next(i);
	}
}
void add(std::vector<int>& tree,int i,int value){
	while(get_next(i+1)!=-1)
	{
		tree[i+1]+=value;
		i=get_next(i);
	}	
}
void add(std::vector<int>& tree,int left,int right,int value){
	forall(i,left,right+1)
		add(tree,i,value);
}
void initiailize(std::vector<int>& v,std::vector<int>& tree){
	tree[0]=0;
	forall(i,0,n){
		add(tree,i,v);
	}
}
int answer(std::vector<int>& tree,int index){
	//0->index
	int sum=0;
	while(get_parent(index)!=-1)
	{
		sum+=tree[index];
		index=get_parent(index);
	}
}
int main(int argc, char const *argv[])
{

	s(n);
	std::vector<int> v(n),tree(n+1,0);
	parent[0]=0;
	forall(i,0,n)s(v[i]);
	int q;
	s(q);
	initiailize(v,tree);
	WHILE(q)
	{
		int x;
		s(x);
		if(x==1)
		{	
			/*point query*/
			int index,value;
			s(index);s(value);
			add(tree,index,value);
		}
		else if(x==2)
		{
			/*range query*/
			int left,right,value;
			s(left);s(right);s(value);
			add(tree,left,right,value);
		}
		else
		{
			//answer for the query 
			int left,right;
			s(left);s(right);
			printf("%d\n",answer(tree,right)-answer(tree,left));
		}
	}
	return 0;
}