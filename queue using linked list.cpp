#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* front = NULL;
Node* rear = NULL;

void Enqueue(int a){
	Node* newNode = new Node();
	newNode->data = a;
	newNode->next = NULL;
	if(front==NULL && rear==NULL){
		front = rear = newNode;	
		return;
	}
	rear->next = newNode;
	rear = newNode;
	return;
}
void print(){
	Node* temp = front;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void Dequeue(){
	Node* temp = front;
	if(front==NULL){
		cout<<"The list is empty!!"<<endl;
		return;
	}
	if(front==rear)
		front = rear = NULL;
	else{
		front = front->next;
	}
	cout<<"The deleted data is: "<<temp->data<<endl;
	delete(temp);
	return;
}
int main()
{
	cout<<"Enter '1' for Enqueue and '0' for Dequeue, When you will stop, please press EOF"<<endl;
	int a,b;
	while(cin>>b){
		if(b==1){
			cout<<"Give a value to insert: ";
			cin>>a;
			Enqueue(a);
		}
		else if(b==0){
			Dequeue();
		}
		print();
	}
	print();
		
	return 0;
}

