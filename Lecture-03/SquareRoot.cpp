// SquareRoot
#include <iostream>
using namespace std;

int main(){
	int n,prec;
	cin>>n>>prec;

	float i=0;
	float inc=1;
	int current_prec=0;

	while(current_prec<=prec){

		while(i*i<=n){

			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;
		current_prec++;
	}
	cout<<"SquareRoot : "<<i<<endl;


	return 0;
}