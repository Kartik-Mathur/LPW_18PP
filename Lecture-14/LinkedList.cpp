#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}

	// ~node(){
	// 	if(next!=NULL){
	// 		cout<<"Deleting "<<data<<endl;
	// 		delete next;
	// 		next=NULL;
	// 	}
	// }

};

class linkedlist{
	node* recursiveSearchHelper(node* head,int d){
		if(head==NULL){
			return NULL;
		}

		if(head->data==d){
			return head;
		}
		return recursiveSearchHelper(head->next,d);
	}	
public:
	node* head;
	node* tail;

	linkedlist():head(NULL),tail(NULL){

	}

	void InsertAtFront(int d){
		if(head==NULL){
			head=tail=new node(d);
		}
		else{
			node* n=new node(d);
			n->next=head;
			head=n;	
		}
	}

	void InsertAtEnd(int d){
		if(head==NULL){
			head=tail=new node(d);
		}
		else{
			node* n=new node(d);
			tail->next=n;
			tail=n;
		}
	}



	int length(){
		int count=0;
		node* temp=head;
		while(temp!=NULL){
			count++;
			temp=temp->next;
			// temp=(*temp).next;
		}
		return count;
	}

	void InsertAtMid(int d,int pos){
		if(pos==0){
			InsertAtFront(d);
		}
		else if(pos>=length()){
			InsertAtEnd(d);
		}
		else{
			int p=1;
			node* temp=head;

			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=new node(d);
			n->next=temp->next;
			temp->next=n;
		}
	}

	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";

			temp=temp->next;
		}
		cout<<endl;
	}

	node* search(int d){
		node* temp=head;

		while(temp!=NULL){
			if(temp->data==d){
				return temp;
			}
			temp=temp->next;
		}
		return NULL;
	}

	void DeleteAtFront(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	void DeleteAtEnd(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete tail;
			temp->next=NULL;
			tail=temp;
		}
	}

	void DeleteAtMid(int pos){
		if(pos==0){
			DeleteAtFront();
		}
		else if(pos>length()){
			DeleteAtEnd();
		}
		else{
			int p=1;
			node *temp=head;

			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=temp->next;
			temp->next=n->next;
			n->next=NULL;
			delete n;
		}
	}

	node* recursiveSearch(int d){
		return recursiveSearchHelper(head,d);
	}

	node* mid(){
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

	// ~linkedlist(){
	// 	if(head!=NULL){
	// 		// cout<<"Deleting "<<head->data<<endl;
	// 		delete head;
	// 		head=tail=NULL;
	// 	}
	// }

};

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

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}



int main(){

	linkedlist l1,l2;


	l1.InsertAtEnd(1);
	l1.InsertAtEnd(3);
	l1.InsertAtEnd(5);
	l1.InsertAtEnd(6);
	l1.InsertAtEnd(7);
	l1.print();
	

	// node* c=merge(l1.head,l2.head);
	// print(c);
	cout<<(l1.mid()->data)<<endl;

	// l.InsertAtMid(7,3);
	// l.DeleteAtFront();
	// l.DeleteAtEnd();
	// l.DeleteAtMid(3);
	// node* ans=l.recursiveSearch(4);
	// cout<<ans->data<<endl;
	// l.print();
	// cout<<l.length()<<endl;
	// node* ans=l.search(4);
	// cout<<ans->data<<endl;
	// cout<<ans->next->data<<endl;


	return 0;
}


	// node n(2);
	// node n1(3);

	// n.next=&n1;


	// cout<<n.data<<endl;
	// cout<<((*n.next).data)<<endl;
	// cout<<((n.next)->data)<<endl;
