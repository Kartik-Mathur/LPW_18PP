// Nstaircase
#include <iostream>
using namespace std;

int nstairs(int n){
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}


	return (nstairs(n-1)+nstairs(n-2)+nstairs(n-3));

}

int Nstaircase(int n,int k){
	// base case
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}

	// recursive case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans += Nstaircase(n-i,k);
	}
	return ans;

}



int main(){

	int n;
	cin>>n;
	cout<<nstairs(n)<<endl;
	int k=3;
	cout<<Nstaircase(n,k)<<endl;


	return 0;
}