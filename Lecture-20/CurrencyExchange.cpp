// CurrencyExchange
#include <iostream>
#include <climits>
using namespace std;

int exchange(int amount,int *coins,int n){
	if(amount==0){
		return 0;
	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int smallerAns=exchange(amount-coins[i],coins,n);
			if(smallerAns!=INT_MAX){
				ans=min(ans,smallerAns+1);
			}
		}
	}
	return ans;
}

int topdown(int amount,int *coins,int n,int *dp){
	if(amount==0){
		dp[amount]=0;
		return 0;
	}

	if(dp[amount]!=-1){
		return dp[amount];
	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int smallerAns=topdown(amount-coins[i],coins,n,dp);
			if(smallerAns!=INT_MAX){
				ans=min(ans,smallerAns+1);
			}
		}
	}
	dp[amount]=ans;
	return ans;
}

int bottomUp(int amount,int* coins,int n){
	int *dp=new int[amount+1];

	for(int i=0;i<=amount;i++){
		dp[i]=INT_MAX;
	}
	dp[0]=0;

	for(int rupay=1;rupay<=amount;rupay++){
		
		for(int i=0;i<n;i++){
			if(rupay-coins[i]>=0){
				dp[rupay]=min(dp[rupay],dp[rupay-coins[i]]+1);
			}
		}
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];
}



int main(){
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}

	int amount;
	cin>>amount;
	int coins[]={1,2,5};
	int n=sizeof(coins)/sizeof(int);

	cout<<topdown(amount,coins,n,dp)<<endl;
	cout<<bottomUp(amount,coins,n)<<endl;
	cout<<exchange(amount,coins,n);	

	cout<<endl;
	return 0;
}