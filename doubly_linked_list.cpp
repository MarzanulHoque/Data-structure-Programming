#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;
};

Node *head,*temp;

Node* GetNewNode(int x){
	Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void insert(int x){
	Node* newNode = GetNewNode(x);
	if(head==NULL){
		head = newNode;
		temp = head;
		return;
	}
	newNode->prev = temp;
	newNode->next = NULL;
	temp->next = newNode;
	temp = newNode;
	return;
}
void print(){
	Node* temp = head;
	while(1){
		cout<<temp->data<<"  ";
		if(temp->next==NULL){
			cout<<endl<<temp->data<<"  ";
			temp = temp->prev;
			while(temp!=NULL){
				cout<<temp->data<<"  ";
				temp = temp->prev;
			}
			cout<<endl;
			return;
		}
		temp = temp->next;
	}
}
int main()
{
	int n,x;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x);
	}
	print();
	return 0; 
}
