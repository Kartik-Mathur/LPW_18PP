// Characters
#include <iostream>
using namespace std;

int main(){
	char ch;
	int alpha=0,spaces=0,digits=0,other=0;

	ch = cin.get();
	while(ch!='\n'){
		if(ch>='0' && ch<='9'){
			// DIGIT
			digits++;
		}
		else if(ch>='a' && ch<='z'){
			alpha++;
		}
		else if(ch==' '||ch=='\n'){
			spaces++;
		}
		else{
			other++;
		}
		ch=cin.get();
	}
	cout<<"Spaces : "<<spaces<<endl;
	cout<<"Alphabets : "<<alpha<<endl;
	cout<<"Special char : "<<other<<endl;
	cout<<"Numbers : "<<digits<<endl;

	return 0;
}