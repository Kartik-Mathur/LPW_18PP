// Stack
#include <iostream>
// #include "node.h"
// #include "c:/desktop/library/mergeSort.h"
// #include <stack>
#include "Stack.h"
using namespace std;

// class stack{
// 	node* head;
// 	int cs;
// public:
// 	stack(){
// 		head=NULL;
// 		cs=0;
// 	}

// 	void push(int data){
// 		node* n=new node(data);
// 		n->next=head;
// 		head=n;
// 		cs++;
// 	}

// 	void pop(){
// 		if(cs==0){
// 			return;
// 		}
// 		node* temp=head;
// 		head=head->next;
// 		delete temp;
// 		cs--;
// 	}

// 	int top(){
// 		return head->data;
// 	}

// 	bool empty(){
// 		return cs==0;
// 	}

// };

class Book{
public:
	int price;
	char name[20];

	Book(char *n,int p){
		strcpy(name,n);
		price=p;
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}
};


int main(){
	
	stack<Book> s;
	Book b1("C++",200);
	Book b2("Java",100);
	// s.push('A');
	// s.push('B');
	// s.push('C');
	s.push(b1);
	s.push(b2);

	// for(int i=0;i<11;i++){
	// 	s.push(i);
	// }

	while(!s.empty()){
		// Book b=s.top();
		// b.print();
		// cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}