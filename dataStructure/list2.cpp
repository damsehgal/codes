#include <iostream>
using namespace std;
struct NODE
{
	int data;
	NODE* pre;
	NODE* next;
};
void push_back(NODE* tail,int d){
	NODE* newNode = new NODE;
	newNode->pre=tail->pre;
	tail=newNode;
}
void push_front(NODE* head,int d){
	NODE* newNode;
	newNode->next=head->next;
	head->next=newNode;
}
void create(NODE* head,NODE* tail,int d){
	NODE* newNode = new NODE();
	newNode->pre=head;
	newNode->next=tail;
	head->next=newNode;
	tail->pre=newNode;
	newNode->data=d;
}
int main(int argc, char const *argv[])
{
	NODE* head = new NODE();
	NODE* tail = new NODE();
	head->pre=NULL;
	tail->next=NULL;
	create(head,tail,12312);
	push_front(head,123);
	push_back(tail,12);
	return 0;
}
	