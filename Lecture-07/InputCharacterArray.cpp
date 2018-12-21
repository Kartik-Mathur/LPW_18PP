// InputCharacterArray
#include <iostream>
using namespace std;

void readLine(char b[],char delimit='\n'){

	char ch;
	ch = cin.get();
	int i=0;
	while(ch!=delimit){
		b[i]=ch;
		i++;

		ch=cin.get();
	}
	b[i]='\0';
}

void print(char *ch){

	for(int i=0;ch[i]!='\0';i++){
		cout<<ch[i];
	}
	cout<<endl;
}

int length(char b[]){
	int i;

	for(i=0;b[i]!='\0';i++){

	}
	return i;
}

int main(){
	char ch[100];

	// cin>>ch;
	int n;
	// cin>>n;
	// cin.get();
	// cin.ignore();

	// cin.getline(ch,100);

	// cout<<n<<endl;
	// cout<<ch<<endl;


	readLine(ch,'$'); 
	// int len=length(ch);
	// cout<<len<<endl;
	
	cin.getline(ch,100,'.');

	// cout<<ch<<endl;
	print(ch);



	return 0;
}