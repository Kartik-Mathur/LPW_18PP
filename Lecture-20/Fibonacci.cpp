#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0||n==1){
		return n;
	}

	int ans=fibo(n-1)+fibo(n-2);
	return ans;
}

int topdown(int n,int *dp){
	if(n==1||n==0){
		dp[n]=n;
		return n;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=topdown(n-1,dp)+topdown(n-2,dp);
	dp[n]=ans;
	return ans;
}

int bottomUp(int n){
	int *dp=new int[n+1];

	// Initialization of base cases
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	int ans=dp[n];
	delete []dp;
	return ans;
}


int main(){
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}

	int n;
	cin>>n;
	
	cout<<topdown(n,dp)<<endl;
	cout<<bottomUp(n)<<endl;
	cout<<fibo(n)<<endl;








	cout<<endl;
	return 0;
}