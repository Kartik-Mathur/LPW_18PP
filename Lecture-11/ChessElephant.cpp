// ChessElephant
#include <iostream>
using namespace std;

int ChessElephant(int i,int j){
	if(i==0 && j==0){
		return 1;
	}

	// Recrusive case
	int ans=0;
	for(int k=1;k<=i;k++){
		ans += ChessElephant(i-k,j);
	}

	for(int k=1;k<=j;k++){
		ans += ChessElephant(i,j-k);
	}
	return ans;
}


int main(){

	int i,j;
	cin>>i>>j;

	cout<<ChessElephant(i,j)<<endl;

	return 0;
}