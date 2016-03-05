#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
	struct node* pre; 
};
void push_back(int data,node *tail){
	node node2;
	node2.data=data;
	node2.pre=tail->pre;

}
int main(int argc, char const *argv[])
{
	node *head;
	node *tail;
	node first;
	first.data=12;
	first.pre=head;
	first.next=tail;
	push_back(23,tail);
	return 0;
}
	