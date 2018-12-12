// Pattern
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int line=1;
	int no=1;

	// Loop for lines
	while(line<=n){
		// WORK
		int count=1;
		while(count<=line){
			cout<<no<<" ";
			no++;

			count++;
		}
		cout<<endl;

		line++;
	}



	return 0;
}