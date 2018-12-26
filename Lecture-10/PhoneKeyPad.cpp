// PhoneKeyPad
#include <iostream>
using namespace std;
string keys[]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void PhoneKeyPad(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	int digit=in[i]-'0';
	for(int k=0;keys[digit][k]!='\0';k++){
		out[j]=keys[digit][k];
		PhoneKeyPad(in,out,i+1,j+1);
	}
}


int main(){
	char a[100];
	char b[100];
	cin>>a;
	PhoneKeyPad(a,b,0,0);

	cout<<endl;
	return 0;
}