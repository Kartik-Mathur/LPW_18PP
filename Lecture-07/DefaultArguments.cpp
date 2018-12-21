// DefaultArguments
#include <iostream>
using namespace std;

int sum(int a=0,int b=0,int c=0){

	return (a+b+c);

}
int main(){

	cout<<sum(1,2,3)<<endl;
	cout<<sum(1,2)<<endl;
	cout<<sum(1)<<endl;
	cout<<sum()<<endl;

	return 0;
}