#include <iostream>

using namespace std;
struct Dnode{
	int data;
	Dnode* next;
	Dnode* pre;
};
int Length(Dnode* head,Dnode* tail){
	int length=0;
	Dnode* newDnode=new Dnode();
	newDnode->next=head;
	while(newDnode->next!=tail){
		newDnode=newDnode->next;
		length++;
	}
	return length;
}
int dnode[10000];
void InsertAtEnd(Dnode* head,Dnode* tail,int d,int x){
	Dnode* newDnode=new Dnode();
	newDnode->pre=tail->pre;
	tail->pre->next=newDnode->pre;
	newDnode->next=tail->pre;
	tail->pre=newDnode->next;
	newDnode->data=d;
}
void InsertAtEnd(Dnode* head,Dnode* tail,int d){}void InsertAtBegin(Dnode* head,Dnode* tail,int d){
	 Dnode* newDnode=new Dnode();
	 newDnode->pre=head;
	 newDnode->next=head->next;
	 head=newDnode->pre;
	 newDnode->data=d;
}
void create(Dnode* head,Dnode* tail,int d){
	Dnode* first=new Dnode();
    Dnode* newDnode=new Dnode();
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
int length1=1;
void print(){
    int count=0;
    int length=length1;
    while(count<length)
    {     cout<<dnode[count]<<"\n"<<dnode[length]<<"\n";
        count++;
     length--;
    }
    
}
void print(Dnode* head,Dnode* tail)
{   Dnode* left=new Dnode();
     Dnode* right=new Dnode();
     left=head;
     right=tail;
        int length=length1,count=0;
    while(count<length)
       {
        cout<<left->data<<"\n";
        
        cout<<right->data<<"\n";
        left->data=left->next->data;
        right->data=right->next->data;
        left=left->next;
        cout<<dnode[count]<<"\n"<<dnode[length]<<"\n";
        right=right->pre;
        count++;
        length--;
    }
 
}

int main(int argc, char const *argv[])
{

	Dnode* head;
	Dnode* tail;
	int t;

    cin>>t;if(t==0){cout<<"NULL";return 0;}
    int x;cin>>x;
    //create(head,tail,x);
    cin>>t;
    int count=0;
    dnode[count]=x; 
    while(t){
        int x;
        cin>>x;
        count++;
        dnode[count]=x;
        InsertAtEnd(head,tail,x);
        
        length1++;
        cin>>t;
        
    }
    
    print();
  
	return 0;
}