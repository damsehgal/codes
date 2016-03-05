

 /*
 	101403061
  	Dhruv Sehgal
	COE3
	Q6 
*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
struct Node *ptr,*newNode,*front,*q,*s_front,*split_front,*split_front1,*split_front2,*a_front,*b_front,*c_front,*temp;
struct Node_d
{
	int data;
	struct Node_d* next;
	struct Node_d* previous;
}*d_front,*newNode_d,*ptr_d,*temp_d,*q_d;
void insert();
void del();
void print();
void printsorted();
void sortedlist();
void frontbacklist();
void sort_merge();
void double_insert();
void double_del();
void double_print();
int main()
{
	int choice,ch;
	char cont='y',sl='y';
	front=(struct Node *)malloc(sizeof(struct Node));
	front->next=NULL;
	front->data=NULL;
	d_front=(struct Node_d *)malloc(sizeof(struct Node_d));
	d_front->next=NULL;
	d_front->data=NULL;
	d_front->previous=NULL;
	s_front=(struct Node *)malloc(sizeof(struct Node));
	s_front->next=NULL;
	s_front->data=NULL;
	while(cont=='Y' || cont=='y')
	{
		cout<<"\n1.Perform operations on single link list\n2.Perform operation on sorted list(ascending order)\n3.Split a list into two\n4.Sort 2 list and merge them\n5.Perform operations on double link list\n";
		cout<<"\nEnter your choice: \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				do
				{
					cout<<"1.Insertion in list\n2.Deletion from list\n3.print the list\n";
					cin>>ch;
					switch(ch)
					{
						case 1:
							insert();
							break;
						case 2:
							del();
							break;
						case 3:
							print();
							break;
						default:
							cout<<"invalid input\n";
					}
					cout<<"do you want to perform more operation on single list\n";
					cin>>sl;
				}while(sl=='y' || sl=='Y');
				break;
			case 2:
				sortedlist();
				break;
			case 3:
				frontbacklist();
				break;
			case 4:
				sort_merge();
				break;
			case 5:
				do
				{
					cout<<"1.Insertion in list\n2.Deletion from list\n3.print the list\n";
					cin>>ch;
					switch(ch)
					{
						case 1:
							double_insert();
							break;
						case 2:
							double_del();
							break;
						case 3:
							double_print();
							break;
						default:
							cout<<"invalid input\n";
					}
					cout<<"do you want to perform more operation on double list\n";
					cin>>sl;
				}while(sl=='y' || sl=='Y');
				break;
			default:
				cout<<"invalid input\n";
		}

		cout<<"\nDo you want to continue? (y/n):\n";
		cin>>cont;
	}
	return 0;
}
void insert()
{
	int value;
	newNode=(struct Node *)malloc(sizeof(struct Node));
	ptr=(struct Node *)malloc(sizeof(struct Node));
	newNode->next=NULL;
	if(front==NULL)
	{
		front->next=newNode;
	}
	else
	{
		int ch;
		do
		{
			cout<<"where do you want to insert the value\n";
			cout<<"1.insert at beginning\n2.insert at end\n3.insert at a given location\n";
			cin>>ch;
			cout<<"enter the value to be inserted\n";
			cin>>value;	
			newNode->data=value;	
			switch(ch)
			{
				case 1:
					newNode->next=front->next;
					front->next=newNode;
					break;
				case 2:
					ptr=front;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=newNode;
					break;
				case 3:
					ptr=front;
					int key;
					cout<<"Enter data of the Node after which new Node is to be inserted:\n";
					cin>>key;
					while(ptr->next!=NULL && ptr->data!=key)
					{
						ptr=ptr->next;
					}
					if(ptr->data==key)
					{
						newNode->next=ptr->next;
						ptr->next =newNode;
					}
					else
					{
						cout<<"Value is not found\n";
					}		
					break;
				default:
					cout<<"invalid input\n";
			}
		}while(ch<1 || ch>3);
	}
}
void print()
{
	int ch;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr=front;
	if(ptr->next==NULL)
	cout<<"list is empty\n";
	else
	{
		cout<<"Contents of the linked list are: \n";
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			cout<<ptr->data<<" ";
		}
		cout<<"\n";
	}
}
void del()
{
	newNode=(struct Node *)malloc(sizeof(struct Node));
	ptr=(struct Node *)malloc(sizeof(struct Node));
	q=(struct Node *)malloc(sizeof(struct Node));
	int ch=0;
	if(front->next==NULL)
		{
			cout<<"list is empty. can not delete\n";
		}
	else
	do
	{
		cout<<"where do you want to delete the list\n";
		cout<<"1.delete from beginning\n2.delete from end\n3.delete from a given location\n";
			cin>>ch;
			switch(ch)
			{
				case 1:
					ptr=front->next;
					front->next=ptr->next;
					free(ptr);
					cout<<"Node deleted from the front.\n";
					break;
				case 2:
					ptr=front;
					while(ptr->next!=NULL)
					{
						q=ptr;
						ptr=ptr->next;
					}
					q->next=NULL;
					free(ptr);
					cout<<"Node deleted from the end.\n";
					break;
				case 3:
					ptr=front;
					int key,k;
					cout<<"Enter the data of the Node to be deleted:\n";
					cin>>key;
					while((ptr->next!=NULL) && (ptr->data!=key))
					{
						q=ptr;
						ptr=ptr->next;
					}
					if(ptr->data==key)
					{
						q->next=ptr->next;
						free(ptr);
						cout<<"Node with data "<<key<<" deleted.\n";
					}
					else
					{
						cout<<"Node not found. Deletion not possible.\n";
					}
					break;
				default:
					cout<<"invalid input\n";
			}
	}while(ch<1 || ch>3);
}
void sortedlist()
{
	char cond='y';
	int ch;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	q=(struct Node *)malloc(sizeof(struct Node));
	cout<<"what do you want to do\n1.insert in sorted list\n2.delete from sorted list\n3.print sorted list\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			int value;
			do
			{
				newNode=(struct Node *)malloc(sizeof(struct Node));
				newNode->next=NULL;
				newNode->data=NULL;
				cout<<"enter the value to be inserted\n";
				cin>>value;
				newNode->data=value;
				if(s_front->next==NULL)
				{
					s_front->next=newNode;
				}
				else
				{
					ptr=s_front;
					int a=1;
					while(ptr->next!=NULL && a==1)
					{
						q=ptr;
						ptr=ptr->next;
						if(ptr->data>value)
						{
							a=0;
							newNode->next=q->next;
							q->next=newNode;
						}
					}
					if(ptr->next==NULL)
					{
						ptr->next=newNode;
					}
				}	
				cout<<"do you want to enter more numbers\n";
				cin>>cond;
			}while(cond=='y' || cond=='Y');
			break;
		case 2:
			int key;
			q=(struct Node *)malloc(sizeof(struct Node));
			ptr=(struct Node *)malloc(sizeof(struct Node));
			cout<<"enter the value to be deleted\n";
			cin>>key;
			if(s_front->next==NULL)
			{
				cout<<"list is empty\n";
			}
			else
			{
				ptr=s_front;
				int a=1;
				while(ptr->next!=NULL && a==1)
				{
					q=ptr;
					ptr=ptr->next;
					if(ptr->data==key)
					{
						a=0;
						q->next=ptr->next;
						cout<<"no deleted from list\n";
					}
				}
				if(ptr->next==NULL && a==1)
				{
					cout<<"no such value present\n";
				}
			}
			break;
		case 3:
			printsorted();
			break;
	}
}
void printsorted()
{
	int ch;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr=s_front;
	if(ptr->next==NULL)
	cout<<"list is empty\n";
	else
	{
		cout<<"Contents of the sorted linked list are: \n";
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			cout<<ptr->data<<" ";
		}
		cout<<"\n";
	}
}
void frontbacklist()
{
	int n,i,value,d;
	cout<<"enter the no of data values in the list\n";
	cin>>n;
	split_front=(struct Node *)malloc(sizeof(struct Node));
	split_front->data=NULL;
	split_front->next=NULL;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	for(i=1;i<=n;i++)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		cout<<"enter the data value of position "<<i<<"\n";
		cin>>value;
		ptr=split_front;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		newNode->data=value;
		ptr->next=newNode;
	}
	ptr=split_front;
	cout<<"original list : ";
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
	d=ceil(n/2.0);
	split_front1=(struct Node *)malloc(sizeof(struct Node));
	split_front1->data=NULL;
	split_front1->next=NULL;
	split_front2=(struct Node *)malloc(sizeof(struct Node));
	split_front2->data=NULL;
	split_front2->next=NULL;
	q=(struct Node *)malloc(sizeof(struct Node));
	ptr=split_front;
	q=split_front1;
	for(i=1;i<=d;i++)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		ptr=ptr->next;
		newNode->data=ptr->data;
		newNode->next=NULL;
		q->next=newNode;
		q=q->next;
	}
	q=split_front1;
	cout<<"split list 1 : ";
	while(q->next!=NULL)
	{
		q=q->next;
		cout<<q->data<<" ";
	}
	cout<<"\n";
	q=split_front2;
	for(i=d+1;i<=n;i++)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		ptr=ptr->next;
		newNode->data=ptr->data;
		newNode->next=NULL;
		q->next=newNode;
		q=q->next;
	}
	ptr=split_front2;
	cout<<"split list 2 : ";
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
}
void sort_merge()
{
	int n1,n2,value,i;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	q=(struct Node *)malloc(sizeof(struct Node));
	a_front=(struct Node *)malloc(sizeof(struct Node));
	a_front->data=NULL;
	a_front->next=NULL;
	b_front=(struct Node *)malloc(sizeof(struct Node));
	b_front->data=NULL;
	b_front->next=NULL;
	c_front=(struct Node *)malloc(sizeof(struct Node));
	c_front->data=NULL;
	c_front->next=NULL;
	cout<<"enter the no of Nodes in list A\n";
	cin>>n1;
	if(n1>0)
	a_front->next=NULL;
	ptr=a_front;
	for(i=1;i<=n1;i++)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		cout<<"enter the data in Node "<<i<<"\n";
		cin>>value;
		newNode->data=value;
		newNode->next=NULL;
		ptr->next=newNode;
		ptr=ptr->next;
	}
	cout<<"enter the no of Nodes in list B\n";
	cin>>n2;
	if(n2>0)
	b_front->next=NULL;
	ptr=b_front;
	for(i=1;i<=n2;i++)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		cout<<"enter the data in Node "<<i<<"\n";
		cin>>value;
		newNode->data=value;
		newNode->next=NULL;
		ptr->next=newNode;
		ptr=ptr->next;
	}
	
	cout<<"Original list A\n";
	ptr=a_front;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
	ptr=a_front;
	for( ;ptr->next!=NULL;ptr=ptr->next)
	{
		for(q=ptr->next;q!=NULL;q=q->next)
		{
			if(ptr->data>q->data)
			{
				int temp=ptr->data;
				ptr->data=q->data;
				q->data=temp;
			}
		}
	}
	cout<<"sorted list A\n";
	ptr=a_front;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
	cout<<"Original list B\n";
	ptr=b_front;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
	ptr=b_front;
	for( ;ptr->next!=NULL;ptr=ptr->next)
	{
		for(q=ptr->next;q!=NULL;q=q->next)
		{
			if(ptr->data>q->data)
			{
				int temp=ptr->data;
				ptr->data=q->data;
				q->data=temp;
			}
		}
	}
	cout<<"sorted list B\n";
	ptr=b_front;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		cout<<ptr->data<<" ";
	}
	cout<<"\n";
	temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=NULL;
	temp->next=NULL;
	ptr=a_front;
	q=b_front;
	temp=c_front;
	while(ptr->next!=NULL && q->next!=NULL)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		if(ptr->next->data>q->next->data)
		{
			q=q->next;
			newNode->data=q->data;
			temp->next=newNode;
			temp=temp->next;
		}
		else
		{
			ptr=ptr->next;
			newNode->data=ptr->data;
			temp->next=newNode;
			temp=temp->next;
		}
	}
	while(ptr->next!=NULL)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		ptr=ptr->next;
		newNode->data=ptr->data;
		temp->next=newNode;
		temp=temp->next;
	}
	while(q->next!=NULL)
	{
		newNode=(struct Node *)malloc(sizeof(struct Node));
		newNode->data=NULL;
		newNode->next=NULL;
		q=q->next;
		newNode->data=q->data;
		temp->next=newNode;
		temp=temp->next;
	}
	
	cout<<"Merged list\n";
	temp=c_front;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		cout<<temp->data<<" ";
	}
	cout<<"\n";
}
void double_insert()
{
	int value;
	newNode_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	ptr_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	temp_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	newNode_d->next=NULL;
	newNode_d->previous=NULL;
	if(d_front==NULL)
	{
		d_front->next=newNode_d;
		newNode_d->previous=d_front;
	}
	else
	{
		int ch;
		do
		{
			cout<<"where do you want to insert the value\n";
			cout<<"1.insert at beginning\n2.insert at end\n3.insert at a given location\n";
			cin>>ch;
			cout<<"enter the value to be inserted\n";
			cin>>value;
			newNode_d->data=value;
			switch(ch)
			{
				case 1:
					newNode_d->next=d_front->next;
					d_front->next=newNode_d;
					newNode_d->previous=d_front;
					break;
				case 2:
					ptr_d=d_front;
					while(ptr_d->next!=NULL)
					{
						temp_d=ptr_d;
						ptr_d=ptr_d->next;
						
					}
					ptr_d->next=newNode_d;
					newNode_d->previous=temp_d;
					break;
				case 3:
					ptr_d=d_front;
					int key;
					cout<<"Enter data of the Node after which new Node is to be inserted:\n";
					cin>>key;
					while(ptr_d->next!=NULL && ptr_d->data!=key)
					{
						ptr_d=ptr_d->next;
					}
					if(ptr_d->data==key)
					{
						newNode_d->next=ptr_d->next;
						ptr_d->next=newNode_d;
						newNode_d->previous=ptr_d;
					} 
					else
					{
						cout<<"Value is not found\n";
					}		
					break;
				default:
					cout<<"invalid input\n";
			}
		}while(ch<1 || ch>3);
	}
}
void double_print()
{
	int ch;
	ptr_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	ptr_d=d_front;
	if(ptr_d->next==NULL)
	cout<<"list is empty\n";
	else
	{
		cout<<"Contents of the linked list are: \n";
		while(ptr_d->next!=NULL)
		{
			ptr_d=ptr_d->next;
			cout<<ptr_d->data<<" ";
		}
		cout<<"\n";
	}
}
void double_del()
{
	newNode_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	ptr_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	q_d=(struct Node_d *)malloc(sizeof(struct Node_d));
	int ch=0;
	if(d_front->next==NULL)
		{
			cout<<"list is empty. can not delete\n";
		}
	else
	do
	{
		cout<<"where do you want to delete the list\n";
		cout<<"1.delete from beginning\n2.delete from end\n3.delete from a given location\n";
		cin>>ch;
			switch(ch)
			{
				case 1:
					ptr_d=d_front->next;
					if(ptr_d->next==NULL)
					{
						ptr_d->previous=NULL;
						d_front->next=NULL;
						free(ptr_d);
						cout<<"Node deleted from the front.\n";
					}
					else
					{
						ptr_d=d_front;
						ptr_d=ptr_d->next;
						ptr_d=ptr_d->next;
						ptr_d->previous=d_front;
						d_front->next=ptr_d;
						free(ptr_d);
						cout<<"Node deleted from the front.\n";
					}
					break;
				case 2:
					ptr_d=d_front;
					while(ptr_d->next!=NULL)
					{
						q_d=ptr_d;
						ptr_d=ptr_d->next;
					}
					q_d->next=NULL;
					free(ptr_d);
					free(q_d);
					cout<<"Node deleted from the end.\n";
					break;
				case 3:
					int key,k;
					cout<<"Enter the data of the Node to be deleted:\n";
					cin>>key;
					ptr_d=d_front->next;
					if(ptr_d->next==NULL)
					{
						if(ptr_d->data==key)
						{
							ptr_d->previous=NULL;
							d_front->next=NULL;
							free(ptr_d);
							cout<<"Node with data "<<key<<" deleted.\n";
						}
						else
						{
							cout<<"Node not found. Deletion not possible.\n";
						}
					}
					else
					{
						ptr_d=d_front;
						while((ptr_d->next!=NULL) && (ptr_d->data!=key))
						{
							q_d=ptr_d;
							ptr_d=ptr_d->next;
						}
						if(ptr_d->data==key)
						{
							q_d->next=ptr_d->next;
							ptr_d=ptr_d->next;
							ptr_d->previous=q_d;
							free(ptr_d);
							free(q_d);
							cout<<"Node with data "<<key<<" deleted.\n";
						}
						else
						{
							cout<<"Node not found. Deletion not possible.\n";
						}
					}
					break;
				default:
					cout<<"invalid input\n";
			}
	}while(ch<1 || ch>3);	
}
