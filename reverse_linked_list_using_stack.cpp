#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node *head,*temp_head;
void reverse(){
	stack<int>s;
	Node* temp = head;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	temp = head;
	while(temp!=NULL){
		temp->data = s.top();
		s.pop();
		temp=temp->next;
	}
	return;
}
void Insert(int x){
	Node* temp = new Node();
	if(head==NULL)
		head = temp;
	else
		temp_head->next = temp;
	temp->data = x;
	temp->next = NULL;
	temp_head = temp;
	return;
}
void Print()
{
	Node* temp = head;
	while(temp!=NULL){
		cout<<"  "<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
	return;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Insert(x);
	}
	Print();
	reverse();
	Print();
	
	return 0;
}
