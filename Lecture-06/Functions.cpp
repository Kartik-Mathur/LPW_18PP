// Functions
#include <iostream>
using namespace std;

void update(int *x){

	*x=*x+1;
	cout<<"In Update "<<*x<<endl;
	return;
}


int main(){

	int x=10;
	update(&x); // Passing address of x

	cout<<"In Main : "<<x<<endl;


	return 0;
}