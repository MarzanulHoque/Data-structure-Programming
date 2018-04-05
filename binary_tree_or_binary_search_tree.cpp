/* "Check if it is binary tree is a binary search tee or not" = is a famous interview question.
Binary tree: It is a one kind of tree which has at most 2 subtrees.
Binary search tree: It is a one kind of tree which has at most 2 subtrees like binary tree and the left sub tree is always equal or lesser than the right subtree. */

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left,*right;
};

int int_min,int_max;

node* GetNode(int data)
{
	node* newNode = new node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node* insert(node* root,int data)
{
	if(root==NULL)
    {
		root = GetNode(data);
	}
	else if(data<=root->data)
    {
		root->left = insert(root->left,data);
	}
	else
    {
		root->right = insert(root->right,data);
	}
	return root;
}

bool IsSubTreeLesser(node* root,int data)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->data <= data && IsSubTreeLesser(root->left,data) && IsSubTreeLesser(root->right,data))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool IsSubTreeGreater(node* root,int data)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->data > data && IsSubTreeLesser(root->left,data) && IsSubTreeLesser(root->right,data))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool IsBstUtil(node* root,int min,int max)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->data>int_min && root->data<int_max && IsBstUtil(root->left,min,root->data)&& IsBstUtil(root->right,root->data,max))
	{
		return true;
	} 
	else
	{
		return false;
	}	
}
bool IsBinarySearchTree(node* root)
{
	return IsBstUtil(root,int_min,int_max);
}

int main()
{
	node *root = NULL;
	int n,data;;
	cout<<"\nEnter the value how much value you want to input: ";
	cin>>n;
	cin>>data;
	int_min = int_max = data;
	root = insert(root,data);
	for(int i=0;i<n-1;i++)
    {
		cin>>data;
		root = insert(root,data);
	}
	if(IsBinarySearchTree(root))
	{
		cout<<"This is a binary search tree!!"<<endl;
	}	
	else
	{
		cout<<"It is not a binary search tree!!"<<endl;
	}

	return 0;
}
