#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* pre;
};
int Length(Node* head,Node* tail){
	int length=0;
	Node* newNode;
	newNode->next=head;
	while(newNode->next!=tail){
		newNode=newNode->next;
		length++;
	}
	return length;
}
void InsertAtEnd(Node* head,Node* tail,int d){
	Node* newNode;
	newNode->pre=tail->pre;
	tail->pre->next=newNode->pre;
	newNode->next=tail->pre;
	tail->pre=newNode->next;
	newNode->data=d;
}
void InsertAtBegin(Node* head,Node* tail,int d){
	 Node* newNode;
	 newNode->pre=head;
	 newNode->next=head->next;
	 head=newNode->pre;
	 newNode->data=d;
}
void create(Node* head,Node* tail,int d){
	Node* first;
	newNode->pre=head->next;
	newNode->next=tail->pre;
	newNode->data=d;
}
int main(int argc, char const *argv[])
{
	Node* head;
	Node* tail;
	create(head,tail,12);
	//InsertAtBegin(head,tail,21);
	//InsertAtEnd(head,tail,32);
	//cout<<Length(head,tail); 
	return 0;
}