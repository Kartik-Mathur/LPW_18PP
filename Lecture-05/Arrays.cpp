// Arrays
#include <iostream>
using namespace std;

void printArray(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

}

int SUM(int a[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans += a[i];
	}
	return ans;
}



int main(){
	int a[100]={1,2,3,4,5};

	printArray(a,5);
	cout<<SUM(a,5)<<endl;

	return 0;
}