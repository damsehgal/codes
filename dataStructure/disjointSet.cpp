#include <bits/stdc++.h>
using namespace std;
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
{//considering 1 based indexing
	int nodes,edges,cycles=0;
	cin>>nodes>>edges;
	std::vector<Node*> v(nodes);
	for(int i=0;i<nodes;i++){
		v[i]=makeSet(i+1);
	}
	for (int i = 0; i < edges; ++i)
	{
		int first,second;
		cin>>first>>second;
		if(findSet(v[first-1])!=findSet(v[second-1]))
			Union(v[first-1],v[second-1]);
		else cycles++;
	}
	cout<<cycles;
	return 0;
}