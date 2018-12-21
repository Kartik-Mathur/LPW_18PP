// Break
#include <iostream>
using namespace std;

int main(){

	int i=0;

	while(i<=10){

		if(i==5){
			i++; // Updation is required before
			// continue
			continue;
		}
		cout<<i<<" ";

		i++;
	}

	cout<<endl;


	return 0;
}