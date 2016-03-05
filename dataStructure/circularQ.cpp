#include <bits/stdc++.h>
using namespace std;
class circularList 
{ 
	private: 
		struct Node 
		{	
			int data;
	 		Node *next; 
		}*ptr,*head,*tail,*current;
	public: 
	circularList()  
	{
		//Constructor
		ptr=head=tail=current=NULL;
	} 
	//functions to insert delete and print
	void insert(int n) 
	{
		//Function To Insert Node 
		ptr=new Node; if(ptr==NULL) 
		{
			cout<<"\nNode can't be created\n";
			 exit(0); 
		} 
		ptr->data=n;
		ptr->next=ptr;
		if(head==NULL) head=tail=ptr;
		else { 
			tail->next=ptr;
			ptr->next=head;
			tail=ptr; 
		}
	} 
	
	void deleteNode()
	{ 
		//Function To Delete Node 
		if(head==NULL) 
		{
			cout<<"\nList Is Empty\n";
			
			exit(0); 
		} 
		head=head->next; 
		tail->next=head; 
		cout<<"\nNode Deleted\n"; 
	} 
	
	void DisplayList() 
	{ 
		//Function To Display List
		current=head;
		if(head==NULL) 
			cout<<"\n List Is Empty\n";
		while((current->next)!=head)
		{
		 	
		  	current=current->next;
		  	cout<<current->data<<" "; 
		}
	} 
}; 
int main() 
{ 
	circularList ob;
	char option;
	int data,ch;
	 loop:
	{
		cout<<"\n1 INSERT ELEMENT\n";
		cout<<"\n2 DISPLAY LIST\n";
		cout<<"\n3 DELETE ELEMENT\n";
		cout<<"\n4 EXIT\n";
		cout<<"\nEnter the corresponding number\n";
		cin>>ch;
		switch(ch)
		{
			case 1: 
				cout<<"\nEnter Data\n";
				cin>>data;
				ob.insert(data);
				break;
			case 2:
				ob.DisplayList(); 
				break;
			case 3:
				ob.deleteNode();
				break;
			case 4:
				exit(1);
			default: 
				cout<<"\nNo betweeen 1 & 4";
		} 
		cout<<"\nDo you Want to Continue(Y/N)\n";
		cin>>option;
		 
		if(option=='Y'|| option=='y')goto loop;
	}
} 