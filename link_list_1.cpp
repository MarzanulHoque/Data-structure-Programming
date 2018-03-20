#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* head;
void insert(int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Print(){
	Node* temp = head;
	while(temp != NULL){
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
}
void insert1(int value,int nth){
	Node* temp = head;
	//Node* temp1;
	int count=0;
	while(temp!=NULL){
		if(count==nth)
			break;
		count++;
		temp = temp->next;
	}	
	Node* temp2 = new Node();
	temp2->data = value;
	temp2->next = temp->next;
	temp->next = temp2;
}

int main()
{
	head = NULL;
	int n,x;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		//cout<<"Enter the number: ";
		cin>>x;
		insert(x);
	}	
	Print();
	//cout << head->data << " " << head->next->data << endl;
	cout<<"give a value and a position to insert a node in nth position: ";
	int nth,value;
	cin>>value>>nth;
	insert1(value,nth-1);
	Print();
	
	return 0;
}
