#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void nodeInit(struct Node* head, int data){
	head->data = data;
	head->next = NULL;
}
void Create(struct Node* head, int data){
	head->data = data;
	head->next = NULL;
}
void insertNodeBack(struct Node* head, int data){
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	Node *temp = head;
	while(temp->next) temp = temp->next;
	temp->next = newNode;
}
void printList(struct Node* head){
	while(head->next) {
	    head = head->next;
        cout << head->data <<"\n";	
    }
}
void reverse(struct Node **head){
	Node *curr ,*prev ,*next;
	curr = *head;
	prev = NULL;
	while(curr){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		
	}
	*head = prev;
}

int main(){
	Node *headA = new Node;
	int t,x;
    cin>>t>>x;
    nodeInit(headA, x);
    while(t!=0){
        cin>>t;
        cin>>x;
        insertNodeBack(headA, x);    
    }
    Node** head_A=&(headA);
    reverse(head_A);
	printList(headA);
	return 0;
}