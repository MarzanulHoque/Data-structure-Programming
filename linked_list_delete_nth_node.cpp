#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
int n,d;
Node* head;
Node* temp_head;
void Insert(int x);
void Print();
void Delete(int n);

int main()
{
	head = NULL;
	temp_head = NULL;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Enter number: ";
		cin>>x;
		Insert(x);
		Print();
	}
	cout<<"Enter a position which you want to delete: ";
	cin>>d;
	Delete(d);
	Print();
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
void Delete(int n){
	Node* temp1 = head;
	if(n==1){
		head = temp1->next;
		delete(temp1);
		return;
	}
	for(int i=0;i<n-2;i++){
		temp1=temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete(temp2);
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
