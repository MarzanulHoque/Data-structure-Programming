#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left,*right;
};

node* find_min(node* root)
{
	while(root!=NULL)
	{
		root = root->left;
	}
	return root;
}

node* Delete(node* root,int data)
{
	if(root==NULL)
	{
		return root;
	}
	else if(data<root->data)
	{
		root->left = Delete(root->left,data);
	}
	else if(data>root->data)
	{
		root->right = Delete(root->right,data);
	}
	else
	{
		//Case: 1 -> No child
		if(root->left==NULL && root->right==NULL)
		{
			delete root;
			root = NULL;
		}
		//Case: 2 -> 1 child
		else if(root->left==NULL)
		{
			node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right==NULL)
		{
			node* temp = root;
			root = root->left;
			delete temp;
		}
		else
		{
			node* temp = find_min(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

//Function to visit nodes in Inorder
void Inorder(node *root) 
{
	if(root == NULL)
	{
		return;
	}
 
	Inorder(root->left);       //Visit left subtree
	cout<<root->data<<" ";  //Print data
	Inorder(root->right);      // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree
node* Insert(node *root,int data) {
	if(root == NULL) 
	{
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
	{
		root->left = Insert(root->left,data);
	}	
	else
	{ 
		root->right = Insert(root->right,data);
	}	
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	node* root = NULL;
	/*root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
	*/
	int n;
	cout<<"Insert the height of the tree!! ";
	cin>>n;
	n = pow(2,n) - 1;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		root = Insert(root,data);
	}
	cout<<"Inorder: ";
	Inorder(root);
	cout<<endl<<"Give the value, change this value to test other cases"<<endl;
	int del;
	cin>>del;
	root = Delete(root,del);

	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<endl;

	return 0;
}
