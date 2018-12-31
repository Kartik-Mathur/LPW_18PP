#include <iostream>
#include <vector>
using namespace std;

int main(){
	// vector<data_type> vector_name;
	vector<int> v;
	// for(int i=10;i>=0;i--){
	// 	v.push_back(i);
	// }
	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(2);
	// v.push_back(2);
	cout<<v.capacity()<<endl;// Gives the maximum size of the vector
	cout<<v.max_size()<<endl;
	// v.pop_back();
	sort(v.begin(),v.end());

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	cout<<endl;

	return 0;
}