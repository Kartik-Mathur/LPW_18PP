// PatternABC
#include <iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		char ch='A';

		for(int count=1;count<=n-i+1;count++){
			cout<<ch;
			ch++;
		}
		ch--;
		for(int count=1;count<=n-i+1;count++){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}


	return 0;
}