#include<bits/stdc++.h>
using namespace std;

struct BSTnode{
	int data;
	BSTnode *left,*right;
};

BSTnode *root;

BSTnode* GetNode(int data){
	BSTnode* newNode = new BSTnode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BSTnode* insert(BSTnode* root,int data){
	if(root==NULL){
		root = GetNode(data);
	}
	else if(data<=root->data){
		root->left = insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}
	return root;
}
bool search(BSTnode* root,int data){
	if(root==NULL) return false;
	else if(root->data==data) return true;
	else if(data<=root->data) return search(root->left,data);
	else if(data>root->data) return search(root->right,data);
}

int main()
{
	root = NULL;
	int n;
	cout<<"\nEnter the value how much value you want to input: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		root = insert(root,data);
	}	
	int x;
	cout<<"\nPut the value you want to search: ";
	cin>>x;
	if(search(root,x)) cout<<"\nFound!!"<<endl;
	else cout<<"\nNot Found!!!"<<endl;

	return 0;
}
