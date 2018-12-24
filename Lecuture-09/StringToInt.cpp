// StringToInt
#include <iostream>
using namespace std;

int StringToInt(char *a,int n){
	// Base Case
	if(n==0){
		return 0;
	}

	// Recursive case
	int last_digit=a[n-1]-'0';
	int ans=StringToInt(a,n-1)*10+last_digit;

	return ans;

}


int main(){
	char a[]="1234";
	int n=4;

	cout<<StringToInt(a,n);


	cout<<endl;
	return 0;
}