#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

node* CreateLL(){
	node* head=NULL;
	int data;
	cin>>data;

	while(data!=-1){
		node* n=new node(data);
		n->next=head;
		head=n;

		cin>>data;
	}	
	return head;
}

void print(node* head){

	while(head){
		cout<<head->data<<"-->";

		head=head->next;
	}
	cout<<endl;

}

int length(node* head){
	int count=0;
	while(head){
		count++;
		head=head->next;
	}
	return count;
}

void BubbleSort(node* &head){
	int len=length(head);
	node* current;
	node* n;
	node* prev;
	for(int i=0;i<len;i++){
		current=head;
		prev=NULL;
		while(current && current->next){
			n=current->next;
			if(current->data>n->data){
				// if swapping ho rahi hai
				if(prev==NULL){
					// Prev==NULL
					current->next=n->next;
					n->next=current;
					head=prev=n;
				}
				else{
					// Prev!=NULL
					current->next=n->next;
					prev->next=n;
					n->next=current;
					prev=n;
				}
			}
			else{
				// swapping nahi ho rahi
				prev=current;
				current=n;
			}


		}


	}
}


void ReverseLL(node* &head){
	node* current=head;
	node* prev=NULL;
	node* n;

	while(current){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}

	head=prev;
}

node* mid(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* slow=head;
	node* fast=head->next;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}


node* merge(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node* c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;

}

node* mergeSort(node* head){

	if(head==NULL||head->next==NULL){
		return head;
	}

	// Divide
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;
	// Sort
	a=mergeSort(a);
	b=mergeSort(b);
	//Merge
	node* newHead=merge(a,b);
	return newHead;

}




int main(){
	
	node* head=CreateLL();
	print(head);
	// BubbleSort(head);
	// print(head);
	// ReverseLL(head);
	// print(head);
	head=mergeSort(head);
	print(head);


	return 0;
}