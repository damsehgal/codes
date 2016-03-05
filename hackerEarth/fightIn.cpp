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
struct Node{
	int data;
	Node* parent;
	int rank;
};
Node* makeSet(int data){
	Node* dummy=new Node();
	dummy->parent=dummy;
	dummy->data=data;
	dummy->rank=0; 
	return dummy;
}
Node* findSet(Node* n){
	if(n->parent==n)return n;

	return n->parent=findSet(n->parent);
}
void Union(Node* n1,Node* n2){
	Node* PARENT1 =findSet(n1);
	Node* PARENT2 =findSet(n2);
	if(PARENT1->rank==PARENT2->rank){
		PARENT1->rank++;
		PARENT2->rank=0;
		PARENT2->parent=PARENT1;
	}
	else if(PARENT1->rank>PARENT2->rank){
		PARENT2->parent=PARENT1;
	}
	else PARENT1->parent=PARENT2;
}
int main(int argc, char const *argv[])
{
	int t;
	s(t);WHILE(t){
		int n;
		s(n);
		int x,y;
		s(x);s(y);
		makeSet(x);
		makeSet(y);
	}
	// int nodes,edges;
	// cin>>nodes>>edges;
	// std::vector<Node*> v(nodes);
	// for(int i=0;i<nodes;i++){
	// 	v[i]=makeSet(i+1);
	// }
	// for (int i = 0; i < edges; ++i)
	// {
	// 	int first,second;
	// 	cin>>first>>second;
	// 	if(findSet(v[first-1])!=findSet(v[second-1]))
	// 		Union(v[first-1],v[second-1]);
	// 	else cycles++;
	// }
	// cout<<cycles;
	// return 0;
}