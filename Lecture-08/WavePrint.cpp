// WavePrint
#include <iostream>
using namespace std;

int main(){
	int a[100][100]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	for(int cols=0;cols<4;cols++){
		if(cols%2==0){
			for(int row=0;row<3;row++){
				cout<<a[row][cols]<<" ";
			}
		}
		else{
			for(int row=2;row>=0;row--){
				cout<<a[row][cols]<<" ";
			}

		}
	}
	cout<<endl;

	return 0;
}