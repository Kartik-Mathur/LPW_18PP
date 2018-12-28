// GridWays
#include <iostream>
using namespace std;

int ways(int i,int j){
	// base case
	if(i==0&&j==0){
		return 1;
	}

	if(i<0 || j<0){
		return 0;
	}

	// recursive case
	int ans=ways(i-1,j)+ways(i,j-1);
	return ans;
}


int main(){
	int i,j;
	cin>>i>>j;

	cout<<ways(i,j)<<endl;



	return 0;
}