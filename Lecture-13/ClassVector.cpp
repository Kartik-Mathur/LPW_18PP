// ClassVector
#include <iostream>
using namespace std;


class Vector{
	int cs;
	int ms;
	int *arr;

public:
	Vector(){
		cs=0;
		ms=4;
		arr=new int[ms];
	}

	Vector(int s){
		cs=0;
		ms=s;
		arr=new int[ms];	
	}

	Vector(Vector &X){
		cs=0;
		ms=X.ms;
		arr=new int[ms];
		for(int i=0;i<X.cs;i++){
			arr[cs]=X.arr[i];
			cs++;
		}

	}

	void push_back(int data){
		if(cs==ms){
			int *oldArr=arr;

			ms=2*ms;
			arr=new int[ms];
			for(int i=0;i<cs;i++){
				arr[i]=oldArr[i];
			}
			delete []oldArr;
		}

		arr[cs]=data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	int operator[](int i){
		return arr[i];
	}

	void print(){
		for(int i=0;i<cs;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

};


int main(){
	Vector v;
	// v.push_back(1);	
	// v.push_back(2);	
	// v.push_back(3);	
	// v.push_back(4);	
	for(int i=0;i<10;i++){
		v.push_back(i);	
	}
	v.pop_back();
	v.pop_back();

	Vector v1(v); // Copy Constructor
	v.print();
	v1.print();
	// Vector v2;
	// v2=v; // Copy Assignment
	// cout<<v.capacity()<<endl;
	cout<<endl;
	return 0;
}