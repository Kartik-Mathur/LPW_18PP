// BinaryTree
#include <iostream>
#include <queue>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};


node* buildTree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node* root=new node(data);
		root->left=buildTree();
		root->right=buildTree();
		return root;
	}
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

int countNodes(node* root){
	if(root==NULL){
		return 0;
	}

	return 1+countNodes(root->left)+countNodes(root->right);
}

int Height(node* root){
	if(root==NULL){
		return 0;
	}

	int leftHeight=Height(root->left);
	int rightHeight=Height(root->right);

	return max(leftHeight,rightHeight)+1;
}

int Diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1=Height(root->left)+Height(root->right);
	int op2=Diameter(root->left);
	int op3=Diameter(root->right);
	return max(op1,max(op2,op3));
}

class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	// Diameter
	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;
	p.diameter=max(op1,max(op2,op3));

	// Height
	p.height=max(left.height,right.height)+1;
	return p;
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

int main(){
	node* root=buildTree();
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	cout<<"Number of Nodes: "<<countNodes(root)<<endl;
	cout<<"Height of Tree : "<<Height(root)<<endl;
	cout<<"Diameter : "<<Diameter(root)<<endl;
	Pair p=fastDiameter(root);
	cout<<"Fast Height : "<<p.height<<endl;
	cout<<"Fast Diameter : "<<p.diameter<<endl;
	LevelOrder(root);



	cout<<endl;     
	return 0;
}