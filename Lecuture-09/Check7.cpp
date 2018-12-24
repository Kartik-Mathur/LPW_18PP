// Check7
#include <iostream>
using namespace std;

bool checkseven(int a[],int n){
	if(n==0){
		return false;
	}

	if(a[0]==7){
		return true;
	}
	bool KyaCHoteMeiMilla=checkseven(a+1,n-1);
	return KyaCHoteMeiMilla;
}

int first7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}

	int index=first7(a,n,i+1);
	return index;
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		int index=i;

		int AageWalaIndex=last7(a,n,i+1);
		if(AageWalaIndex>index){
			return AageWalaIndex;
		}
		else{
			return index;
		}
	}

	int in = last7(a,n,i+1);
	return in;
}


int main(){
	int a[]={1,2,3,7,4,5,6,7,7,7,4,3,2,1};
	int n=sizeof(a)/sizeof(int);
	int index=last7(a,n,0);

	if(index!=-1){
		cout<<"Exists at : "<<index;
	}
	else{
		cout<<"Doesnot Exists";
	}


	cout<<endl;
	return 0;
}