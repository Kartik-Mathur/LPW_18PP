// MergeSortedArrays
#include <iostream>
using namespace std;

void MergeArrays(int a[],int b[],int m,int n){

	int i=m-1;
	int j=n-1;
	int k=m+n-1;

	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}

// If there are any remaining items in b[] then simply
	// Copy them as it is in the a[]
	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}

	while(i>=0){
		a[k]=a[i];
		k--;
		i--;
	}
}


int main(){
	int a[7]={1,2,5,8};
	int b[3]={3,4,7};

	MergeArrays(a,b,4,3);
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
}