// NCR
// DoWhile
#include <iostream>
using namespace std;

int fact(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans = ans * i;
	}

	return ans;	
}

int NCR(int n,int r){
	int ans=0;

	ans = fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main(){
	int n,r;
	cin>>n;
	cout<<NCR(5,2)<<endl;

	return 0;
}