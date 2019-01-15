#include <iostream>
using namespace std;

template<typename T>
class node{
public:
	T value;
	string key;
	node<T>* next;

	node(string key,T value){
		this->key=key;
		this->value=value; 
		next=NULL;
	}
};



template<typename T>
class hashtable{
	node<T>** Bucket;
	int cs;
	int ts;

	int hashFn(string key){
		int ans=0;
		int mul_factor=1;

		for(int i=0;key[i]!='\0';i++){
			ans += key[i]*mul_factor;

			mul_factor *= 37;

			ans %= ts;
			mul_factor %= ts;
		}
		return ans;
	}

	void rehash(){
		node<T>** oldBucket=Bucket;
		int oldts=ts;

		ts=2*ts;
		cs=0;
		Bucket=new node<T>* [ts];
		for(int i=0;i<ts;i++){
			Bucket[i]=NULL;
		}

		// Insertion from oldBucket to new bucket

		for(int i=0;i<oldts;i++){
			node<T>* temp=oldBucket[i];

			while(temp){
				insert(temp->key,temp->value);
				temp=temp->next;
			}

			if(oldBucket[i]!=NULL){
				delete oldBucket[i];
			}
		}
		delete []oldBucket;
	}


public:
	hashtable(int s=7){
		ts=s;
		cs=0;
		Bucket=new node<T>* [ts];

		for(int i=0;i<ts;i++){
			Bucket[i]=NULL;
		}
	}

	void insert(string key,T value){
		int i=hashFn(key);
		node<T>* n=new node<T> (key,value);

		node<T>* temp=Bucket[i];
		while(temp){
			if(temp->key==key){
				return;
			}
			temp=temp->next;
		}

		n->next=Bucket[i];
		Bucket[i]=n;
		cs++;

		float load_factor=cs/(1.0*ts);
		if(load_factor>0.7){
			rehash();
		}
	}

	T* search(string key){

		int i=hashFn(key);
		node<T>* temp=Bucket[i];

		while(temp){
			if(temp->key==key){
				return &(temp->value);
			}
			temp=temp->next;
		}

		return NULL;
	}

	T& operator[](string key){
		T* temp=search(key);
		if(temp==NULL){
			T garbage;
			insert(key,garbage);
			temp=search(key);
			return *temp;
		}
		else{
			return *temp;
		}
	}


	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"-->";
			node<T>* temp=Bucket[i];
			while(temp){
				cout<<temp->key<<",";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

	void Delete(string key){

	}

};


int main(){
	hashtable<int> h;

	h.insert("Apple",100);
	h.insert("Pineapple",50);
	h.insert("Banana",30);
	h.insert("Apple",300);

	h["Guava"]=90;// Insertion
	h["Apple"]=200; // updation
	cout<<h["Apple"]<<endl; // search
	h.insert("Mango",150);

	h.print();



	cout<<endl;
	return 0;
}