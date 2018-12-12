// Largest
#include <iostream>
using namespace std;

int main(){

	int a,b,c;
	cout<<"Enter three numbers ";
	cin>>a>>b>>c;

	if(a>b && a>c){
		cout<<a<<" is Largest "<<endl;
	}
	else if(b>a && b>c){
		cout<<b<<" is Largest "<<endl;
	}
	else{
		cout<<c<<" is largest "<<endl;
	}
	
	return 0;
}