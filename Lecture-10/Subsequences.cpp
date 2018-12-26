// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char in[],char out[],int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

// Take a character and call subsequences
	out[j]=in[i];
	Subsequences(in,out,i+1,j+1);

// Dont take a character and call subsequences
	Subsequences(in,out,i+1,j);

}

int main(){
	char in[]="abc";
	char out[100];

	Subsequences(in,out,0,0);
	cout<<endl;
	return 0;
}