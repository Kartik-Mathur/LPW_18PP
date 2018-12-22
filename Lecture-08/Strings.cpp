// Strings
#include <iostream>
using namespace std;

int main(){
	char a[7]="Kartik";
	cout<<a<<endl;
	string s="Mudit";// Initialization

	string s1(a); // Initialization
	string s2("Hello World");


	// s="Mudit";
	// cout<<s<<endl;
	// cout<<s1<<endl;
	// cout<<s2<<endl;

	for(int i=0;s[i]!='\0';i++){
		cout<<s[i]<<" "; 
	}
	cout<<endl;



	return 0;
}