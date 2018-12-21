// Pallindrome
#include <iostream>
using namespace std;

int length(char b[]){
	int i;

	for(i=0;b[i]!='\0';i++){

	}
	return i;
}

bool isPallindrome(char b[]){
	int len=length(b);
	int i=0;
	int j=len-1;

	while(i<j){
		if(b[i]!=b[j]){
			return false;
		}
		i++;
		j--;
	}

	return true;
}

int main(){
	char a[]="abca";

	if(isPallindrome(a)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}



	return 0;
}