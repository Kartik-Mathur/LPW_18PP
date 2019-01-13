#include <iostream>
#include <queue>
using namespace std;

class Meracomparator{
public:
	bool operator()(int a,int b){
		return a>b;
	}

};

void printHeap(priority_queue<int,vector<int>,Meracomparator> h){
	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}	
}


int main(){
	priority_queue<int,vector<int>,Meracomparator> h;
	int k,data;
	k=3;
	// cin>>k;
	int cs=0;

	while(1){
		cin>>data;
		if(data==-1){
			//print heap
			printHeap(h);

		}
		else{
			if(cs<k){
				h.push(data);
				cs++;
			}
			else{
				if(data>h.top()){
					h.pop();
					h.push(data);
				}
			}
		}
	}




	cout<<endl;
	return 0;
}