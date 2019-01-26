// InbuiltHashtable
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
	auto i=10;
	cout<<i<<endl;

	// unordered_map<string,int> h;
	map<string,int> h;

	h["Mango"]=100;
	h["PineApple"]=50;
	pair<string,int> p("Banana",30);
	h.insert(p);
	h.insert(make_pair("Apple",120));
	string s;
	s="mango";
	if(h.count(s)){
		cout<<"Found"<<endl;
	}
	else{
		cout<<"Not found!"<<endl;
	}

	for(auto node:h){
		// node.first-key
		// node.second-value bucket
		cout<<node.first<<"->"<<node.second<<endl;
	}












	cout<<endl;
	return 0;
}