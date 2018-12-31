// Experimental
#include <iostream>
#include <ctime>
using namespace std;
void merge(int *a,int *x,int *y,int s,int e){
	int mid=(s+e)/2;
	int i=s,j=mid+1;
	int k=s;
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k++]=y[j++];
		}
	}
	while(i<=mid){
		a[k]=x[i];
		k++;
		i++;
	}

	while(j<=e){
		a[k++]=y[j++];
	}

}



void mergeSort(int *a,int s,int e){
	if(s>=e){
		return;
	}
	// Divide
	int x[100];
	int y[100];
	int mid=(s+e)/2;

	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}

	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}

	// Sort
	mergeSort(x,s,mid);
	mergeSort(y,mid+1,e);
	// Merge
	merge(a,x,y,s,e);
}

void BubbleSort(int *a,int n){
	for(int i=0;i<=n-2;i++){

		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}	
}

int main(){
	int *a;
	int n;
	cin>>n;
	a=new int[n];
	for(int i=n-1;i>=0;i--){
		a[n-1-i]=i;
	}
	clock_t t1;
	t1=clock();
	mergeSort(a,0,n-1);
	t1=clock()-t1;
	cout<<"Merge Sort took : "<<t1<<endl;

	for(int i=n-1;i>=0;i--){
		a[n-1-i]=i;
	}
	t1=clock();
	BubbleSort(a,n);
	t1=clock()-t1;
	cout<<"BubbleSort Sort took : "<<t1<<endl;



	cout<<endl;
	return 0;
}