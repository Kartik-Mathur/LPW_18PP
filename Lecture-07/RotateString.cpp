// RotateString
#include <iostream>
using namespace std;

int length(char b[]){
	int i;

	for(i=0;b[i]!='\0';i++){

	}
	return i;
}


int main(){
	char a[100];
	cin.getline(a,100);

	int n;
	cout<<"Enter n :";
	cin>>n;
	int len=length(a);
	int i=len-1;
	int j=i+n;

	while(i>=0){
		a[j]=a[i];
		i--;
		j--;
	}

	cout<<a<<endl;
	i=0;
	j=len;

	while(i<n){
		a[i]=a[j];
		j++;
		i++;
	}
	a[len]='\0';
	cout<<a<<endl;





	return 0;
}