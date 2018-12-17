// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int a[],int n,int key){
	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}

	return -1;
}


int main(){
	int a[]={1,3,5,6,8};
	int n=5;
	int key;
	cin>>key;

	int ans=BinarySearch(a,n,key);
	if(ans==-1){
		cout<<"Key not found!"<<endl;
	}
	else{
		cout<<"Key found at index "<<ans<<endl;
	}



	return 0;
}