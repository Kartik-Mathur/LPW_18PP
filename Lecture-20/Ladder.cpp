#include <iostream>
using namespace std;

int ladder(int n,int k,int *dp){
	if(n==0){
		dp[n]=1;
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=0;
	for(int i=1;i<=k;i++){
		ans += ladder(n-i,k,dp);
	}

	dp[n]=ans;
	return ans;
}

int bottomUP(int n,int k){
	int *dp=new int[n+1];

	dp[0]=1;

	for(int i=1;i<=n;i++){
		dp[i]=0;
	}

	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				dp[i] += dp[i-j];
			}
		}
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[n];
}

int ladder_ways(int n,int k){

	int *dp=new int[n+1];
	dp[0]=dp[1]=1;

	for(int i=2;i<=n;i++){
		if(i-1-k>=0){
			dp[i]=2*dp[i-1]-dp[i-1-k];
		}
		else{
			dp[i]=2*dp[i-1];
		}
	}

	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[n];
}



int main(){
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}

	int n;
	cin>>n;	

	cout<<ladder(n,3,dp)<<endl;	
	cout<<bottomUP(n,3)<<endl;
	cout<<ladder_ways(n,3)<<endl;

	return 0;
}