#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;
Node* temp_head;
void insert(int x);
void print();
void reverse(Node* p);

int main()
{
	head = NULL;
	temp_head = NULL;
	int n;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		//cout<<"Enter number: ";
		cin>>x;
		insert(x);
	}
	reverse(head);
	print();
	return 0;
}

void reverse(Node* p){
	if(p->next==NULL){
		head = p;
		return;
	}
	reverse(p->next);
	Node* q = p->next;
	q->next = p;
	p->next = NULL;
	return;
}

void insert(int x){
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
void print()
{
	Node* temp = head;
	while(temp!=NULL){
		cout<<"  "<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
	return;
}
