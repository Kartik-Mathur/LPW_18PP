// BST
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};

node* InsertInBST(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	
	if(data<=root->data){
		root->left=InsertInBST(root->left,data);
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}
node* buildTree(){
	int data;
	cin>>data;
	node* root=NULL;

	while(data!=-1){
		root=InsertInBST(root,data);
		cin>>data;
	}
	return root;
}

void LevelOrder(node* root){
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

node* SearchInBST(node* root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// recursive case
	if(root->data==key){
		return root;
	}
	else if(root->data>key){
		return SearchInBST(root->left,key);
	}
	else{
		return SearchInBST(root->right,key);
	}
}

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=min && root->data<=max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

void printRange(node* root,int k1,int k2){

}

void PreOrder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(node* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);

}

void PostOrder(node* root){
	if(root==NULL){
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

class Pair1{
public:
	int height;
	bool balance;

};


Pair1 isBalanced(node* root){
	Pair1 p;
	// base case
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}

	// recursive case
	Pair1 left=isBalanced(root->left);
	Pair1 right=isBalanced(root->right);

	p.height=max(left.height,right.height)+1;
	if(left.balance&&right.balance&& abs(left.height-right.height)<=1){
		p.balance=true;
	}
	else{
		p.balance=false;
	}
	return p;

}



int main(){

	node* root=buildTree();
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;

	LevelOrder(root);	
	// int key;
	// cout<<"Enter Key : ";
	// cin>>key;
	bool ans=isBST(root);
	if(ans==true){
		cout<<"BST"<<endl;
	}
	else{
		cout<<"Not a BST"<<endl;
	}
	Pair1 p=isBalanced(root);
	if(p.balance){
		cout<<"balance"<<endl;
	}
	else{
		cout<<"Not balance"<<endl;
	}
	cout<<"height : "<<p.height<<endl;	

	return 0;
}