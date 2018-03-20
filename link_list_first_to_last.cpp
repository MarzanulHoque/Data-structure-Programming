#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;
Node* temp_head;
void Insert(int x);
void Print();

int main()
{
	head = NULL;
	temp_head = NULL;
	int n;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Enter number: ";
		cin>>x;
		Insert(x);
		Print();
	}
	return 0;
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
