#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head=NULL;
void insrt(int data){
	node* temp=new node();
	temp-> data=data;
	temp-> next= NULL;
	if(head==NULL)
		head=temp;
	else{
		node* temp1=head;
		while( temp1->next!=NULL)
			temp1=temp1->next;
		temp1->next=temp;
	}
}
void insrt_begn(int data){
	node* temp=new node();
	temp-> data=data;
	temp-> next= NULL;
	if(head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
}

void shw(){
	if(head==NULL)
		cout<<"No elements\n";
	else{
	node* temp1=head;
	while(temp1->next!=NULL){
		cout<<temp1->data<<" ";temp1=temp1->next;
	}cout<<temp1->data<<endl;}
}
void delet(){
	node* temp1=head;
	if(temp1->next==NULL)
		head=NULL;
	else{
	while( temp1->next->next!=NULL)
			temp1=temp1->next;
	temp1->next=NULL;}
}
main()
{
	int choice,data;
	do{
	cout<<"1:Insert new node at last\n"
	    <<"2:delete the last node:\n"
	    <<"3:list the nodes:\n"
	    <<"4:insert at beginning\n";
	cin>> choice;
	switch (choice)
	{
	case 1:{
		cout<<"Enter the value:\n";cin>>data;
		insrt(data);break;}
	case 2:{delet();break;}
	case 3:{shw();break;}
	case 4:{
		cout<<"Enter the value:\n";cin>>data;		
		insrt_begn(data);break;}
	}}while(choice<10);
return 0;
}
