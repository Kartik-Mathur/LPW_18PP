// Nstrings
#include <iostream>
using namespace std;

int length(char b[]){
	int i;

	for(i=0;b[i]!='\0';i++){

	}
	return i;
}

void copy(char a[],char b[]){
	int i;
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
	}
	a[i]='\0';
}


int main(){
	char ch[100];
	int n;

	// char a[100]="Hello Coding";
	// char b[100];
	// copy(b,a);
	// cout<<b<<endl;

	cin>>n;
	cin.get();

	int largest=0;
	char largest_string[100];

	for(int i=0;i<n;i++){
		cin.getline(ch,100);

		int len=length(ch);
		if(len>largest){
			copy(largest_string,ch);
			largest=len;
		}

	}

	cout<<"Largest : "<<largest<<endl;
	cout<<largest_string<<endl;
	return 0;
}