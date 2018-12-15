// Scope
#include <iostream>
using namespace std;
//Global Variable
int x=50;

int main(){
	// cout<<"X : "<<x<<endl;
	int x=10;
	int i=100;

	for(int i=1;i<=5;i++){
		cout<<i<<endl;
		int x=i;
	}

	cout<<x<<endl;
	cout<<i<<endl;
	::x=::x+2;
	cout<<"Global X : "<<::x<<endl;

	return 0;
}