#include <iostream>
#include <climits>
using namespace std;


int main(){
	int n;
	cin>>n;
	int largest=INT_MIN,minimum=INT_MAX;
	int count=1;
	int number;
	int sum=0;

	while(count<=n){
		cin>>number;
		sum = sum+number;

		if(number>largest){
			largest=number;
		}

		if(number<minimum){
			minimum=number;
		}


		count++;
	}
	cout<<"Mean : "<<sum/n<<endl;
	cout<<"Largest : "<<largest<<endl;
	cout<<"minimum : "<<minimum<<endl; 

	return 0;
}