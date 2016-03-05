#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node* create(int data){
	Node* root =new Node();
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}
void insert(Node* root,int data){
	if(data>root->data && root->right==NULL){
		Node* newNode=new Node();
		root->right=newNode;
		newNode->data=data;
		newNode->right=NULL;
		newNode->left=NULL;
		return;
	}
	else if(data<root->data && root->left==NULL){
		Node* newNode=new Node();
		root->left=newNode;
		newNode->data=data;
		newNode->right=NULL;
		newNode->left=NULL;
		return;

	}
	if(root->data>data)insert(root->left,data);
	else insert(root->right,data);
	
}

Node* search(int data,Node* root){
	if(data<root->data && root->left==NULL)
		{
			Node* newNode=new Node();
			return newNode;
		}
	if(data>root->data && root->right==NULL){
			Node* newNode=new Node();
			return newNode;
		};
	if(data==root->data)return root;
	if(data>root->data){cout<<"R";search(data,root->right);}
	else {cout<<"L";search(data,root->left);}
}
Node* searchParent(int data,Node* root){
	if(data>root->data)
	{
		if(data==root->right->data){root->right=NULL;return root;}
	}
	else if(data<root->data){
		if(data==root->left->data){root->left=NULL;return root;}	
	}
	if(data>root->data)searchParent(data,root->right);
	if(data<root->data)searchParent(data,root->left);;
}
Node* Succesor(Node* given,Node* root){
	while(searchParent(given->data,root)->right!=given)
		given=searchParent(given,root);
	return given;
}
void Delete(Node* root,Node* given){
	Node* parent=searchParent(given->data,root);
	if(!given->left  && !given->right)
	{
		if(parent->right==given)
			parent->right=NULL;
		else
			parent->left=NULL;
	}
	else if(given->left==NULL && given->right!=NULL){
		if(parent->right==given)
			parent->right=given->right;
		else
			parent->left=given->left;	
	}
	else{
					
	}
}
void Print(Node* root,char c){
	if(c=='p'){
		//preorder ->dlr
		if(root->left!=NULL )
			Print(root->left,'p');
		cout<<root->data<<" ";
		
		if(root->right!=NULL)
		Print(root->right,'p');

		else return;
		
	}
}
int main(int argc, char const *argv[])
{
	Node* root=create(12);
	 insert(root,23);
	 insert(root,6);
	 insert(root,21);
	 insert(root,8);
	 insert(root,7);
	 insert(root,24);
	 Print(root,'p');
	 Node* newNode=search(8,root);
	 cout<<newNode->data;
	// Delete(root,newNode);
	 Print(root,'p');
	 //Node* newNode2=search(21,root);
	 //cout<<newNode2->data;
	return 0;
}

