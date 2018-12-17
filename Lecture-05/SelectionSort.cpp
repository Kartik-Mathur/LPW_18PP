// DoWhile
#include <iostream>
using namespace std;

void SelectionSort(int a[],int n){
	for(int i=0;i<=n-2;i++){

		int minimum=i;

		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[minimum]){
				minimum=j;
			}
		}
		int temp=a[i];
		a[i]=a[minimum];
		a[minimum]=temp;

	}	
}

void TakeInput(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	return;
}


void PRINTArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return;	
}

int main(){
	int a[100];
	int n;
	cin>>n;

	TakeInput(a,n);
	SelectionSort(a,n);
	PRINTArray(a,n);

	return 0;
}