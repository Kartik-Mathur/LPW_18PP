// LinearSearch
#include <iostream>
using namespace std;

int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int key;
	cout<<"Enter key : ";
	cin>>key;

	int i;

	for(i=0;i<10;i++){
		if(a[i]==key){
			cout<<"Key found at index "<<i;
			break;
		}

	}

	if(i==10){
		cout<<"Not found!";
	}

	cout<<endl;
	return 0;
}