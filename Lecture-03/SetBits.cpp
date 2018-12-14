// SetBits
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for( ;n>0;n=n>>1){
		sum = sum + (n&1);
	}

	cout<<"Set Bits : "<<sum<<endl;


	return 0;
}