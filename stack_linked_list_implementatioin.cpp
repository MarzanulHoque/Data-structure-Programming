#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* top;

void push(int x){
	Node* node = new Node();
	node->data = x;
	node->next = top;
	top = node;
	return;
}
void print(){
	Node* temp = top;
	while(temp!=NULL){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	cout<<endl;
	return;
}
int pop(){
	if(top==NULL){
		cout<<"Stack underflow!!"<<endl;
		return 0;
	}
	int x = top->data;
	top = top->next;
	return x;	
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		push(x);
	}
	print();
	for(int i=0;i<n+2;i++){
		int j = pop();
		if(j!=0)cout<<"Poped data: "<<j<<endl;
	}
	return 0;
}
