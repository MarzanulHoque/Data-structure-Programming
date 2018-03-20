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
void Sort();

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
		Insert(x);
	}
	Print();
	cout<<endl;
	Sort();
	Print();
	return 0;
}

void Sort(){
	Node* temp = head;
	while(temp!=NULL){
		Node* temp1= temp->next;
		int num;
		while(temp1!=NULL){
			if(temp->data>temp1->data){
				num = temp1->data;
				temp1->data = temp->data;
				temp->data = num;
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
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
