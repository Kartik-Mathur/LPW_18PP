#include <iostream>
using namespace std;

int Wine(int *a,int i,int j,int day){
	if(i>j){
		return 0;
	}

	int op1=a[i]*day+Wine(a,i+1,j,day+1);
	int op2=a[j]*day+Wine(a,i,j-1,day+1);

	return max(op1,op2);
}

int topdown(int *a,int i,int j,int day,int dp[][100]){
	if(i>j){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int op1=a[i]*day+topdown(a,i+1,j,day+1,dp);
	int op2=a[j]*day+topdown(a,i,j-1,day+1,dp);

	dp[i][j]=max(op1,op2);
	return dp[i][j];
}

int BottomUp(int *a,int n){
	int dp[100][100]={0};

	int day=n;
	for(int i=0;i<n;i++){
		dp[i][i]=day*a[i];
	}
	day--;

	for(int len=2;len<=n;len++){

		int start_i=0;
		int end_i=n-len;
		int i=start_i;
		while(i<=end_i){
			int j=i+len-1;
			int op1=a[i]*day+dp[i+1][j];
			int op2=a[j]*day+dp[i][j-1];

			dp[i][j]=max(op1,op2);
			i++;
		}
		day--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return dp[0][n-1];


}



int main(){
	int dp[100][100]={0};

	memset(dp,-1,sizeof(dp)); // Initializes all the buckets with -1

	int a[]={2,3,5,1,4};
	int n=sizeof(a)/sizeof(int);

	cout<<Wine(a,0,n-1,1)<<endl;
	cout<<topdown(a,0,n-1,1,dp)<<endl;
	cout<<BottomUp(a,n)<<endl;



	cout<<endl;
	return 0;	
}