#include <iostream>
#include <queue>
using namespace std;

class Meracomparator{
public:
	bool operator()(int a,int b){
		return a<b;
	}

};

int main(){
	priority_queue<int,vector<int>,Meracomparator> h;
	h.push(5);
	h.push(8);
	h.push(4);
	h.push(2);
	h.push(1);
	h.push(15);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}

	cout<<endl;
	return 0;
}