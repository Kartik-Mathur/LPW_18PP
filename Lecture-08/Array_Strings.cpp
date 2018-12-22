// Array_Strings
#include <iostream>
using namespace std;

int main(){
	string s[10];
	s[0]="Apple";
	s[1]="Banana";
	s[2]="Guava";
	s[3]="PineApple";

	for(int i=0;i<=3;i++){
		for(int j=0;s[i][j]!='\0';j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}