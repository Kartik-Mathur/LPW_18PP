#include <iostream>
#include <map>
#include <list>
#include <set>
#include <climits>
using namespace std;

template<typename T>
class Graph{
public:
	map<T,list<pair<T,int> > > adjList;

	void addEdge(T u,T v,int d,bool bidir=true){
		adjList[u].push_back(make_pair(v,d));
		if(bidir){
			adjList[v].push_back(make_pair(u,d));
		}
	}

	void printAdjList(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto children:node.second){
				cout<<"("<<children.first<<","<<children.second<<") ";
			}
			cout<<endl;
		}
	}

	void SSSP(T src){
		set<pair<int,T> > s;

		map<T,int> dist;

		for(auto node:adjList){
			dist[node.first]=INT_MAX;
		}

		dist[src]=0;
		s.insert(make_pair(0,src));
		while(!s.empty()){
			auto p=*(s.begin());
			T parent=p.second;
			int parentDist=p.first; // because in set first is dist and second is node
			s.erase(s.begin());

			for(auto children:adjList[parent]){
				if(parentDist+children.second<dist[children.first]){
					auto f=s.find(make_pair(dist[children.first],children.first));

					if(f!=s.end()){
						s.erase(f);
					}

					dist[children.first]=parentDist+children.second;
					s.insert(make_pair(dist[children.first],children.first));

				}
			}
		}

		for(auto node:dist){
			cout<<"Distance of "<<node.first<<" from "<<src<<" : "<<dist[node.first]<<endl;
		}


	}

};


int main(){

	Graph<string> g;

	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Mumbai","Jaipur",8);

	g.printAdjList();
	cout<<endl;

	g.SSSP("Amritsar");














	return 0;
}