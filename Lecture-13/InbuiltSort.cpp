#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
	cout<<"Compairing "<<a<<" and "<<b<<endl;
	return a<b;
}

int main(){
	
	int a[]={9,8,7,6,5,4,3,2,1,10};	
	int n=sizeof(a)/sizeof(int);

	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}