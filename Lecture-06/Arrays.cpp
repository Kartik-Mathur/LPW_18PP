// Arrays
#include <iostream>
using namespace std;

int* test(){
	int x=10;

	return (&x);
}


void print(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
}

void print1(int *b,int n){

	for(int i=0;i<n;i++){
		cout<<*(b+i)<<" ";
	}
	cout<<endl;
}


int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	// cout<<sizeof(a)/sizeof(int)<<endl;
	// cout<<a<<endl;
	// cout<<a+1<<endl;
	// cout<<&a<<endl;
	// cout<<&a+1<<endl;	
	// cout<<&a[0]<<endl;
	print(&a[0],10);
	print1(a+5,10);

	int *x=test();
	cout<<*x<<endl;


	return 0;
}