#include <iostream>

using namespace std;
struct Dnode{
	int data;
	Dnode* next;
	Dnode* pre;
};
int Length(Dnode* head,Dnode* tail){
	int length=0;
	Dnode* newDnode;
	newDnode->next=head;
	while(newDnode->next!=tail){
		newDnode=newDnode->next;
		length++;
	}
	return length;
}
void InsertAtEnd(Dnode* head,Dnode* tail,int d){
	Dnode* newDnode;
	newDnode->pre=tail->pre;
	tail->pre->next=newDnode->pre;
	newDnode->next=tail->pre;
	tail->pre=newDnode->next;
	newDnode->data=d;
}
void InsertAtBegin(Dnode* head,Dnode* tail,int d){
	 Dnode* newDnode;
	 newDnode->pre=head;
	 newDnode->next=head->next;
	 head=newDnode->pre;
	 newDnode->data=d;
}
void create(Dnode* head,Dnode* tail,int d){
	Dnode* first;
	newDnode->pre=head->next;
	newDnode->next=tail->pre;
	newDnode->data=d;
}
Dnode* DeleteAtHead(Dnode* head){
	head=head->next;
	head->pre=NULL;
	return head;
}
Dnode* DeleteAtTail(Dnode* tail){
	tail=tail->pre;
	tail->next=NULL;
	return tail;
}


int main(int argc, char const *argv[])
{

	Dnode* head;
	Dnode* tail;
	create(head,tail,12);
	InsertAtBegin(head,tail,21);
	InsertAtEnd(head,tail,32);
	cout<<Length(head,tail); 
	return 0;
}