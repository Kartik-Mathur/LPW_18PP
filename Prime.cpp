// Prime
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;

	int i=2;
	while(i<=n-1){
		if(n%i==0){
			cout<<"Not prime "<<endl;
			break;
		}
		i++;
	}

	if(i==n){
		cout<<"Prime"<<endl;
	}



	return 0;
}