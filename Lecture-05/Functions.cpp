// Functions
// DoWhile
#include <iostream>
using namespace std;

// datatype function_name()

void printHello(){
	cout<<"Hello World!"<<endl;
}

void SUM(int a,int b){
	cout<<(a+b)<<endl;
}

int SUM1(int a,int b){
	return (a+b);
}


int main(){
	int a,b;
	cin>>a>>b;

	// printHello(); // calling the function
	SUM(a,b);
	int ans=SUM1(a,b);
	cout<<ans<<endl;


	return 0;
}