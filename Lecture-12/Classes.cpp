#include <iostream>
using namespace std;

// ------------------ BLUEPRINT ----------------
class Car{
private:
	int seats;
	// const int tyres;
public:
	static int count;
	char *name;
	int price;
	int model;

	// Constructor
	Car(){
		name=NULL;
		count++;
	}
	// Parameterized Constructor
	Car(char *n,int p,int s,int m){
		count++;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model=m;		
	}

	// Car(char *n,int p,int s):price(p),seats(s),tyres(4){
	// 	name = new char[strlen(n)+1];
	// 	strcpy(name,n);		
	// 	model=444;
	// }
	// Copy Constructor
	// Car D=C; - First way to call copy Constructor
	// Car D(C); - Second Way to call copy Constructor
	Car(Car &X){
		count++;
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		// name=X.name;
		price=X.price;
		seats=X.seats;
		model=X.model;
	}

	void print()const{
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<"$"<<endl;
		cout<<"Seats : "<<seats<<endl;
		cout<<"Model : "<<model<<endl<<endl;		
	}

	void SetValues(char *n,int p,int s,int m){
		if(name!=NULL){
			delete []name;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model=m;
	}

	void SetSeats(int s){
		if(s>=2){
			seats=s;
		}
		else{
			seats=5;
		}
	}

	int GetSeats(){
		return seats;
	}

	void SetName(char *n){
		if(name!=NULL){
			delete []name;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}

// E=D; Copy Assignment
	void operator=(Car X){
		if(name!=NULL){
			delete []name;
		}
		name = new char [strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		model=X.model;
		seats=X.seats;
	}

	void operator+=(Car X){
		char *oldName=name;
		int l1=strlen(name);
		int l2=strlen(X.name);
		int len=l1+l2+1;
		name=new char[len];
		strcpy(name,oldName);

		int i=l1;
		cout<<name<<endl;
		for(int j=0;j<=l2;j++){
			name[i]=X.name[j];
			i++;
		}
		cout<<name<<endl;
		delete []oldName;

		price += X.price;
		seats += X.seats;
		model += X.model;
	}

	~Car(){
		count--;
		cout<<"Delete Object "<<name<<endl;
	}

};
// -----------------------------


int Car::count=0;


int main(){

	Car A;

	// A.seats=4;
	A.SetSeats(-4);

	A.price=100;
	// A.name[0]='B';
	// A.name[1]='M';
	// strcpy(A.name,"BMW");
	A.SetName("BMW");
	A.model=500;
	Car B;
	B.SetValues("AUDI",200,5,110);


	// int ans=A.GetSeats();
	// cout<<ans<<endl;
	Car C("Suzuki",500,6,300);
	Car D=C; // Copy Constructor

	
	Car E;
	E=D; // Copy Assignment
	E.name[0]='B';
	A+=B;

	Car *F=new Car;
	cout<<Car::count<<endl;

	// *F.seats=5;
	// strcpy(*F.name,"XYZ");
	// *F.model=1000;
	// *F.price=333;
	(*F).SetValues("XYZ",333,5,1000);

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();
	(*F).print();
	delete F;
	cout<<Car::count<<endl;




	return 0;
}