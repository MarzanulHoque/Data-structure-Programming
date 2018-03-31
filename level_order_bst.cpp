#include<bits/stdc++.h>
using namespace std;

struct node
{
	char data;
	node *left,*right;
};

void levelOrder(node* root)
{
	if(root==NULL)
		return;
	queue<node*>q;
	q.push(root);
	cout<<endl;
	while(!q.empty())
	{
		node* current = q.front();
		cout<<current->data<<"  ";

		if(current->left!=NULL) 
			q.push(current->left);
		if(current->right!=NULL) 
			q.push(current->right);
		q.pop();
	}
	cout<<endl;
}
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

int main()
{
	node *root = NULL;
	int n;
	cout<<"\nEnter the value how much value you want to input: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char data;
		cin>>data;
		root = insert(root,data);
	}
	levelOrder(root);	
	return 0;
}
