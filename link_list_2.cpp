#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head;

int main()
{
	head = NULL;
	int n;
	cout<<"How many numbers: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Enter number: ";
		cin>>x;
		Insert(x);
		Print(x);
	}
}
