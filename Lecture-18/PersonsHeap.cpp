#include <iostream>
#include <queue>
using namespace std;

class Person{
	char name[20];
	int age;
	int height;	
public:
	Person(char *n,int a,int h){
		strcpy(name,n);
		age=a;
		height=h;
	}

	int getHeight(){
		return height;
	}
	friend ostream& operator<<(ostream& os,Person p);
};



class Meracomparator{
public:
	bool operator()(Person a,Person b){
		return a.getHeight()>b.getHeight();
	}

};

ostream& operator<<(ostream& os,Person p){
	cout<<p.name<<endl;
	cout<<p.age<<endl;
	cout<<p.height<<endl<<endl;
	return os;
}


int main(){
	priority_queue<Person,vector<Person>,Meracomparator> h;

	Person p1("Mudit",20,6);
	Person p2("Keshav",50,4);
	Person p3("Divyansh",10,7);

	h.push(p1);
	h.push(p2);
	h.push(p3);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}


	cout<<endl;
	return 0;
}