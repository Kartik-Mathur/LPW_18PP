#ifndef STACK_H
#define STACK_H
#include "node.h"
using namespace std;

template <typename T>
class stack{
	node<T>* head;
	int cs;

public:
	stack(){
		head=NULL;
		cs=0;
	}

	void push(T data){
		node<T>* n= new node<T>(data);
		n->next=head;
		head=n;
		cs++;
	}

	void pop(){
		if(cs==0){
			return;
		}
		node<T>* temp=head;
		head=head->next;
		delete temp;
		cs--;
	}

	bool empty(){
		return cs==0;
	}

	T top(){
		return head->data;
	}
};

#endif