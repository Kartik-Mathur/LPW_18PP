#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char a[]="11...._ _ _ _123* * * * 321_1 1 12 13 14";

	// char *strtok(char *a,char *listofDelimiters)
	char *ans = strtok(a," *._");
	
	while(ans!=NULL){

		cout<<ans<<endl;
		ans=strtok(NULL," *._");
		
	}


	return 0;
}