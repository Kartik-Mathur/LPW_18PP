// TOH
#include <iostream>
using namespace std;

void toh(int n,char source,char helper,char destination){
	if(n==0){
		return;
	}

	toh(n-1,source,destination,helper);
	cout<<"Taking disk "<<n<<" from "<<source<<" to "<<destination<<endl;
	toh(n-1,helper,source,destination);
}


int main(){

	toh(10,'A','B','C');


	cout<<endl;
	return 0;
}