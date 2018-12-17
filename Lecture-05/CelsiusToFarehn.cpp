// CelsiusToFarehn
// DoWhile
#include <iostream>
using namespace std;

void printTable(int init,int fval,int step){
	int f=init;
	int c;
	while(f<=fval){

		c=(5.0/9)*(f-32);
		cout<<f<<" "<<c<<endl;

		f=f+step;
	}

	return;	
}


int main(){

	int init,fval,step;
	cin>>init>>fval>>step;

	printTable(init,fval,step);


	return 0;
}