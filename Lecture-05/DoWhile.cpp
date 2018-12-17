// DoWhile
#include <iostream>
using namespace std;

int main(){

	char ch;
	int a=0;
	do{
		a--;
		if(a>0){
			cout<<a<<endl;
		}
		else{
			cout<<"Not Valid"<<endl;
		}
	}
	while(a>0);



	return 0;
}