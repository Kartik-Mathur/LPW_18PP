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


node* LevelOrderInput(){
	queue<node*> q;
	int data;
	
	cout<<"Enter root node : ";
	cin>>data;
	node* root=new node(data);
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<"Enter children of"<<temp->data<<" : ";
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}
	}
	return root;
}

void Mirror(node* root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	Mirror(root->left);
	Mirror(root->right);
} 

int indx=0;

node* CreateTree(int *in,int *pre,int s,int e){
	if(s>e){
		return NULL;
	}

	int data=pre[indx];
	node* root=new node(data);
	indx++;

	int k=-1;
	for(int i=s;i<=e;i++){
		if(data==in[i]){
			k=i;
			break;
		}
	}

	root->left=CreateTree(in,pre,s,k-1);
	root->right=CreateTree(in,pre,k+1,e);

	return root;
}



int main(){
	node* root=buildTree();

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	// cout<<endl;
	// PostOrder(root);
	cout<<endl;

	LevelOrder(root);
	// Mirror(root);
	// LevelOrder(root);
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};
	int n=sizeof(pre)/sizeof(int);

	root=CreateTree(in,pre,0,n-1);

	LevelOrder(root);
	cout<<endl;     


	return 0;
}