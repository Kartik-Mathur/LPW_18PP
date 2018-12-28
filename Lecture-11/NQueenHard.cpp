#include <iostream>
#include <bitset>
using namespace std;

bitset<20> c;
bitset<20> d1;
bitset<20> d2;
int ans=0;

void CountQueen(int i,int n){
	if(i==n){
		ans=ans+1;
		return;
	}

	for(int col=0;col<n;col++){
		if(!c[col] && !d1[i-col+n-1] && !d2[i+col]){
			c[col]=d1[i-col+n-1]=d2[i+col]=1;
			CountQueen(i+1,n);
			c[col]=d1[i-col+n-1]=d2[i+col]=0;
		}
	}
}


int main(){
	int n;
	cin>>n;

	CountQueen(0,n);
	cout<<ans<<endl;

	return 0;
}