// TwoD_Array
#include <iostream>
using namespace std;

int main(){

	// char ch[10][10]={
	// 	"ABC",
	// 	"DEF",
	// 	"GHI"
	// };
	char ch[10][10]={
		{'A','B'},
		{'C','D'},
		{'E','F'}
	};


	int a[100][100]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int no=1;
	// for(int i=0;i<4;i++){
	// 	for(int j=0;j<4;j++){
	// 		a[i][j]=no;
	// 		no++;
	// 	}
	// }

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ch[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
