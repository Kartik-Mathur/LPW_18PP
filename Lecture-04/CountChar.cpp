// CountChar
#include <iostream>
using namespace std;

int main(){
	char ch;
	int count=0;

	
	ch = cin.get();
	// cin>>ch;

	while(ch!='$'){
		count++;
		ch=cin.get();
		// cin>>ch;
	}
	cout<<"Characters : "<<count<<endl;

	return 0;
}