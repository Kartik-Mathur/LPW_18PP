// switchcase
// DoWhile
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

// syntax :
	switch(ch){
		case 'm':
		case 'M':
				cout<<"Monday";
				break;
				
		case 'T':
				cout<<"Tuesday";
				// i=i+1;
				break;
		default:
				cout<<"Not valid day";		


	}
	cout<<endl;



	return 0;
}