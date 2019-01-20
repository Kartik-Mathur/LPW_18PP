// ElephantWays
#include <iostream>
using namespace std;

int ways(int i,int j){
	int dp[100][100]={0};

	dp[0][0]=1;
	int val=1;
	// Initialize the 0th row
	for(int k=1;k<=i;k++){
		dp[0][k]=val;
		val*=2;
	}

	// Initialize the 0th column
	val=1;
	for(int k=1;k<=j;k++){
		dp[k][0]=val;
		val*=2;
	}

	for(int k=1;k<=i;k++){
		for(int l=1;l<=j;l++){
			int ans=0;
			// Iterate over the rows less than i
			for(int m=0;m<k;m++){
				ans += dp[m][l];
			}
			// Iterate over the cols less than j
			for(int m=0;m<l;m++){
				ans += dp[k][m];
			}			
			dp[k][l]=ans;
		}
	}

	int n=i;
	int m=j;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[i][j];
}


int main(){
	int i,j;
	cin>>i>>j;

	cout<<ways(i,j);

	cout<<endl;
	return 0;	
}