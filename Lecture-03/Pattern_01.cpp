// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	int n,val;
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i%2==0){
			val=0;
		}
		else{
			val=1;
		}

		for(int count=1;count<=i;count++){
			cout<<val<<" ";
			val=1-val;
		}
		cout<<endl;
	}




















	return 0;
}