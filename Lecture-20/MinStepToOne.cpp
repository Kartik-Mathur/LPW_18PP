#include <iostream>
#include <climits>
using namespace std;

int Minstep(int n){
	if(n==1){
		return 0;
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	op1=Minstep(n-1);
	if(n%2==0){
		op2=Minstep(n/2);
	}
	if(n%3==0){
		op3=Minstep(n/3);
	}

	return 1+min(op1,min(op2,op3));
}

int topdown(int n,int *dp){
	if(n==1){
		dp[n]=0;
		return 0;
	}

	if(dp[n]!=-1){
		return dp[n];
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	op1=topdown(n-1,dp);
	if(n%2==0){
		op2=topdown(n/2,dp);
	}
	if(n%3==0){
		op3=topdown(n/3,dp);
	}

	dp[n]=1+min(op1,min(op2,op3));
	return dp[n];
}


int bottomUP(int n){
	int *dp=new int[n+1];
	dp[1]=0;

	for(int i=2;i<=n;i++){

		dp[i]=1+dp[i-1];
		if(i%2==0){
			dp[i]=min(dp[i],dp[i/2]+1);
		}
		if(i%3==0){
			dp[i]=min(dp[i],dp[i/3]+1);
		}
	}

	// for(int i=1;i<n+1;i++){
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	return dp[n];
}



int main(){
	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}

	int n;
	cin>>n;	

	cout<<topdown(n,dp)<<endl;
	cout<<bottomUP(n)<<endl;
	cout<<Minstep(n);
	

	cout<<endl;
	return 0;
}
