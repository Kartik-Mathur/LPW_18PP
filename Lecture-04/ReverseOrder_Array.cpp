#include <iostream>
using namespace std;

int main(){

	int a[100];
	int n;
	// cin>>n;

	for(int i=0;i<=9;i++){
		a[i]=i;
	}

	for(int i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}