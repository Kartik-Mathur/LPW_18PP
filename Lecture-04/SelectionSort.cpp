// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int a[100];

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	// Selection Sort
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

	for(int i=0;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;





















	return 0;
}