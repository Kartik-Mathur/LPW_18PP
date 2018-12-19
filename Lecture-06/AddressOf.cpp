#include <iostream>
using namespace std;

int main(){
	int a=10;
	float b=10.1;
	char ch='A';
	
// Pointer Creation
	int *aptr=&a;
	float *bptr=&b;
	char *chptr=&ch;

//Dereferencing
	float c=*bptr;
	char d=*chptr;
	
 
	// cout<<&a<<endl;
	cout<<(bptr)<<endl;

	// cout<<&b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

	// cout<<*(&chptr)<<endl;
	// cout<<(int *)&ch<<endl;
	// cout<<(void *)(&ch + 1)<<endl;
	// cout<<(void *)&ch<<endl;
	// cout<<(float*)(chptr+1)<<endl;



	return 0;
}