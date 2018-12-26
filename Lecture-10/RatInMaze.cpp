// RatInMaze
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10],int i,int j,int m,int n,int sol[][10]){
	// base case
	if(i==m-1 && j==n-1){
		sol[i][j]=1;
		for(int k=0;k<m;k++){
			for(int l=0;l<n;l++){
				cout<<sol[k][l]<<" ";
			}cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	sol[i][j]=1;
	if(j+1<n && maze[i][j+1]!='X'){
		bool KyaRightSeBaatBani=RatInMaze(maze,i,j+1,m,n,sol);
		if(KyaRightSeBaatBani){
			return true;
		}
	}

	if(i+1<m && maze[i+1][j]!='X'){
		bool KyaNeecheSeBaatBani=RatInMaze(maze,i+1,j,m,n,sol);
		if(KyaNeecheSeBaatBani){
			return true;
		}
	}
	sol[i][j]=0;
	return false;

}

int main(){
	char maze[][10]={
		"OOOO",
		"OOXX",
		"OOOO",
		"XXOO"
	};
	int sol[10][10]={0};

	RatInMaze(maze,0,0,4,4,sol);

	cout<<endl;
	return 0;
}