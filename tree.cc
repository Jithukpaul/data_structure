#include<iostream>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};
node* newNode(int data){
	node* nod =new node();
	nod->data=data;
	nod->left=NULL;
	nod->right=NULL;
}
void inorder(node* nod){
	if(nod==NULL)
		return;
	inorder(nod->left);
	cout<<nod->data;
	inorder(nod->right);
}
void preorder(node* nod){
	if(nod==NULL)
		return;
	cout<<nod->data;
	preorder(nod->left);
	preorder(nod->right);
}
void postorder(node* nod){
	if(nod==NULL)
		return;
	postorder(nod->left);
	postorder(nod->right);
	cout<<nod->data;
}
void mirror(node* nod){
	node* temp;
	if(nod==NULL)
		return;
	mirror(nod->left);
	mirror(nod->right);
	temp=nod->left;
	nod->left=nod->right;
	nod->right=temp;
}
main(){
node* root =newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
cout<<"inorder:";
inorder(root);cout<<endl<<"preorder:";
preorder(root);cout<<endl<<"postorder:";
postorder(root);cout<<endl;
mirror(root);

cout<<"After mirroring \ninorder:";
inorder(root);cout<<endl<<"preorder:";
preorder(root);cout<<endl<<"postorder:";
postorder(root);cout<<endl;

return 0;
}
