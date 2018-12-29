#include <iostream>
using namespace std;

int *CreateArray(int n){
	int *arr=new int[n];

	for(int i=0;i<n;i++){
		arr[i]=i;
	}
	return arr;
}


int main(){
	// int *a=new int;
	// delete a;
	int n;
	// cin>>n;

	// int *a=CreateArray(n);
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// delete []a;
	int r,c;
	cin>>r>>c;

	int **a;
	a=new int*[r]; // Array Of Pointers

	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=i*j;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}

	// Delete
	for(int i=0;i<r;i++){
		delete []a[i];
	}	
	delete[]a;
	
	cout<<endl;


	return 0;
}