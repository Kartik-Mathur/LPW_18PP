// Nqueen
#include <iostream>
using namespace std;

bool isSafeToPut(int board[100][100],int i,int j,int n){
	for(int k=0;k<n;k++){
		if(board[k][j]){
			return false;
		}
	}
	for(int k=0;k<n;k++){
		if(board[i][k]){
			return false;
		}
	}
	int r=i,c=j;
	while(r>=0 && c>=0){
		if(board[r][c]){
			return false;
		}
		r--;
		c--;
	}
	r=i;
	c=j;

	while(r>=0 && c<n){
		if(board[r][c]){
			return false;
		}
		r--;
		c++;
	}
	return true;

}


bool Nqueen(int board[100][100],int n,int i){
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(board[i][j]){
					cout<<"Q ";
				}
				else{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}cout<<endl;
		return false;
	}

	for(int j=0;j<n;j++){
		if(isSafeToPut(board,i,j,n)){
			board[i][j]=1;
			bool KyaBakiBaatBani=Nqueen(board,n,i+1);
			if(KyaBakiBaatBani){
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;

}

int main(){
	int board[100][100]={0};
	int n;
	cin>>n;

	Nqueen(board,n,0);

	cout<<endl;
	return 0;
}