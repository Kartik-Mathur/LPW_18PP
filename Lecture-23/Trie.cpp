// Trie
#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	char data;
	bool isTerminal;
	unordered_map<char,node*> h;

	node(char d){
		data=d;
		isTerminal=false;
	}

};

class Trie{
	node* root;
public:
	Trie(){
		root=new node('\0');
	}

	void addWord(char *word){
		node* temp=root;
		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];
			if(temp->h.count(ch)==0){
				temp->h[ch]=new node(ch);
				temp=temp->h[ch];
			}
			else{
				temp=temp->h[ch];
			}

		}
		temp->isTerminal=true;
	}

	bool SearchWord(char *word){
		node* temp=root;

		for(int i=0;word[i]!='\0';i++){
			char ch=word[i];

			if(temp->h.count(ch)==0){
				return false;
			}
			else{
				temp=temp->h[ch];
			}
		}
		return temp->isTerminal;
	}

};



int main(){
	char a[100];
	Trie t;
	char b[]="Hello";
	t.addWord(b);
	t.addWord("Hell");
	t.addWord("Not");
	t.addWord("No");
	t.addWord("Coin");
	while(1){
		cin>>a;

		if(t.SearchWord(a)){
			cout<<"Found"<<endl;
		}
		else{
			cout<<"Not Found"<<endl;
		}
	}




	return 0;
}