// SortedOrNot
#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
	// Base case
	if(n==1||n==0){
		return true;
	}

	// Assumption
	bool KyaChotaSortedHai=isSorted(a+1,n-1);
	if(a[0]<a[1] && KyaChotaSortedHai==true){
		return true;
	}

		return false;
}

int power(int a,int n){
	if(n==0){
		return 1;
	}

	int ans=a*power(a,n-1);
	return ans;
}



int main(){

	int a[]={1,2,4,15,6,7,8};
	int n=sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}

	cout<<power(2,3)<<endl;




	return 0;
}