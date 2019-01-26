// Int_AdjList
#include <iostream>
#include <list>
using namespace std;

class Graph{

public:
	list<int> *adjList;
	int v;

	Graph(int n){
		v=n;
		adjList=new list<int>[v];
	}

	void addEdge(int u,int v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);	
		}
	}

	void printadjList(){
		for(int i=0;i<v;i++){
			cout<<i<<"-->";
			for(auto neighbours:adjList[i]){
				cout<<neighbours<<",";
			}
			cout<<endl;
		}

	}


};


int main(){

	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(0,2);
	g.addEdge(0,3);

	g.printadjList();










	return 0;
}