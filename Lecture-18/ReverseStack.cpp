// ReverseStack
#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s,int top){
	if(s.empty()){
		s.push(top);
		return;
	}

	int topelement=s.top();
	s.pop();
	pushBottom(s,top);
	s.push(topelement);
}


void ReverseStack(stack<int> &s){
	if(s.empty()){
		return;
	}

	int top=s.top();
	s.pop();
	ReverseStack(s);
	pushBottom(s,top);
}

void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
}


int main(){
	stack<int> s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		s.push(i);
	}
	print(s);
	ReverseStack(s);
	print(s);


	cout<<endl;
	return 0;
}