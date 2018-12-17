// CallByValue
#include <iostream>
using namespace std;

void myswap(int &c,int &d){
	int temp=c;
	c=d;
	d=temp;
	cout<<"In myswap a: "<<c<<" b: "<<d<<endl;
}


int main(){
	int a,b;
	a=10;
	b=15;
	
	myswap(a,b);
	cout<<"In Main a: "<<a<<" b: "<<b<<endl;
	return 0;
}