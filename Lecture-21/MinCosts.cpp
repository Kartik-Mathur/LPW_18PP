// MinCosts
#include <iostream>
using namespace std;

int MinCosts(int cost[][10],int i,int j){
	if(i==0 && j==0){
		return cost[i][j];
	}
	if(i==0 && j>0){
		return MinCosts(cost,i,j-1)+cost[i][j];
	}
	else if(i>0 && j==0){
		return MinCosts(cost,i-1,j)+cost[i][j];
	}

	int op1=MinCosts(cost,i-1,j)+cost[i][j];
	int op2=MinCosts(cost,i,j-1)+cost[i][j];

	return min(op1,op2);
}

int BottomUp(int cost[][10],int i,int j){
	int dp[10][10]={0};

	dp[0][0]=cost[0][0];
	// Initialize all the rows
	for(int k=1;k<=i;k++){
		dp[k][0]=cost[k][0]+dp[k-1][0];
	}

	// Initialize all the cols
	for(int k=1;k<=j;k++){
		dp[0][k]=cost[0][k]+dp[0][k-1];
	}

	for(int k=1;k<=i;k++){
		for(int l=1;l<=j;l++){
			dp[k][l]=min(dp[k-1][l],dp[k][l-1])+cost[k][l];
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
	int cost[][10]={
		{1,1,2,1},
		{1,1,4,3},
		{3,1,1,1},
		{2,3,2,4}
	};

	int i,j;
	cin>>i>>j;
	cout<<MinCosts(cost,i,j)<<endl;
	cout<<BottomUp(cost,i,j)<<endl;

	return 0;
}