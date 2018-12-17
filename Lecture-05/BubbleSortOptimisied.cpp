// BubbleSort

#include <iostream>
using namespace std;

int main(){
	int a[100];

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//BUBBLE SORT

	for(int i=0;i<=n-2;i++){
		int count=0;
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				count++;
				swap(a[j],a[j+1]);
			}
		}
		if(count==0){
			break;
		}
	}

	for(int i=0;i<=n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
}