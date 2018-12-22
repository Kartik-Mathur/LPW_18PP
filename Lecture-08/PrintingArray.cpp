// PrintingArray
#include <iostream>
using namespace std;

void print(int a[],int n,int i){
	// Base Case
	if(i==n){
		return;
	}
	cout<<a[i]<<" ";

	print(a,n,i+1);
	return;
}

void print1(int a[],int n){
	// Base case
	if(n==0){
		return;
	}

	// Assumption
	cout<<a[0]<<" ";
	print1(a+1,n-1);

	return;
}

void print2(int a[],int n,int i){
	if(i==0){
		return;
	}

	cout<<a[i-1]<<" ";
	print2(a,n,i-1);

	return;
}



int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	print(a,n,0);
	cout<<endl;
	print1(a,n);
	cout<<endl;
	print2(a,n,n);
	cout<<endl;



	return 0;
}