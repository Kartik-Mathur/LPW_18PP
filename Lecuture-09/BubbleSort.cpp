// BubbleSort
#include <iostream>
using namespace std;

// void BubbleSort(int *a,int n){
// 	// base case
// 	if(n==0){
// 		return;
// 	}

// 	// recursive case
// 	for(int i=0;i<=n-2;i++){
// 		if(a[i]>a[i+1]){
// 			swap(a[i],a[i+1]);
// 		}
// 	}

// 	BubbleSort(a,n-1);

// }

void BubbleSort(int *a,int n,int i){
	// base case
	if(n==0){
		return;
	}
	// recursive case
	if(i==n-1){
		i=0;
		BubbleSort(a,n-1,i);
		return;
	}
	if(a[i]>a[i+1]){
		swap(a[i],a[i+1]);
	}
	BubbleSort(a,n,i+1);

}


int main(){
	int a[]={5,4,3,2,1,7,8,0};
	int n=sizeof(a)/sizeof(int);

	BubbleSort(a,n,0);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;
	return 0;
}