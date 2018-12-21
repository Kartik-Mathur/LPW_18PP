// Permutations
#include <iostream>
using namespace std;

int main(){
	// char a[]="abcdefghijklmnopqrstuvwxyz";
	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100);

	int freq[26]={0};
	// for(int i=0;a[i]!='\0';i++){
	// 	cout<<" Character "<<a[i]<<" is mapped to index : "<<a[i]-'a'<<endl;
	// }


	for(int i=0;a[i]!='\0';i++){
		char ch=a[i];
		int index=ch-'a';

		freq[index]++;
	}
	for(int i=0;b[i]!='\0';i++){
		char ch=b[i];
		int index=ch-'a';

		freq[index]--;
	}	
	int i;
	for(i=0;i<26;i++){
		// cout<<freq[i]<<" ";
		if(freq[i]!=0){
			cout<<"Not a Permutation"<<endl;
			break;
		}
	}
	if(i==26){
		cout<<"Permutation"<<endl;
	}
	cout<<endl;



	return 0;
}