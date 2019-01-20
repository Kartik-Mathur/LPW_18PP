// LCS
#include <iostream>
using namespace std;

int bottomUp(string s1,string s2){
	int dp[100][100];

	int n=s1.length();
	int m=s2.length();
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	int index=dp[n][m];

	char *ans=new char[index+1];
	ans[index]='\0';
	index--;
	int i=n-1;
	int j=m-1;

	while(i>=0 && j>=0){
		if(s1[i]==s2[j]){
			ans[index]=s1[i];
			index--;
			i--;
			j--;
		}
		else if(dp[i-1][j]>dp[i][j-1]){
			i--;
		}
		else{
			j--;
		}
	}
	cout<<ans<<endl;
	return dp[n][m];	
}


int main(){
	string s1="bccb";
	string s2="ccb";

	cout<<bottomUp(s1,s2)<<endl;




	cout<<endl;
	return 0;
}