#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
	int data;
	struct Node *next;
};

void insertAtHead(int data,Node* head){
	Node p;
	p.data = data;
	p.next = head;
	head = &p;
}

//void insertAtPos

int main(){
	Node* head,tail;
	Node *p = new Node();
	p->data = 10;
	p->next = NULL;
	head = p;
	tail = p;
	cout<<head->data;
	return 0;
}
