// Directions

#include <iostream>
using namespace std;

int main(){
	char ch;
	int x=0,y=0;

	ch=cin.get();

	while(ch!='\n'){
		if(ch=='N'){
			y++;	
		}
		else if(ch=='S'){
			y--;
		}
		else if(ch=='W'){
			x--;
		}
		else{
			x++;
		}
		ch=cin.get();
	}
//PRINT the direction
	// If we are in 1st quadrant
	if(x>=0 && y>=0){

		// Print 'E' x times
		while(x>0){
			cout<<"E";
			x--;
		}

		// Print 'N' y times
		while(y>0){
			cout<<"N";
			y--;
		}
		

	}










	return 0;
}