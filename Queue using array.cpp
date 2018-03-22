#include<bits/stdc++.h>
using namespace std;

int n,front,rear,arr[90000];

bool IsEmpty(){
	if(front==-1 && rear==-1) return true;
	else 
		return false;
}
void Enqueue(int a){
	if((rear+1)%n==front){
		cout<<"Queue is full!!"<<endl;
		return;
	}
	else if(IsEmpty())
		front = rear = 0;
	else
		rear = (rear+1)%n;
	arr[rear] = a;
	return;
}
void Dequeue(){
	if(IsEmpty()){
		cout<<"The queue is empty!!"<<endl;
		return;
	}
	else if(front==rear)
		front=rear=-1;
	else{
		int d = arr[front];
		front = (front+1)%n;
		cout<<"Deleted value is: "<<d<<endl;
	}
	return;
}
void print(){
	for(int i=front;i<=rear;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return;
}
int main()
{
	front = rear = -1;
	cout<<"Give the value of queue: ";
	cin>>n;
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
		if(!IsEmpty())
			print();
	}
	if(!IsEmpty())
		print();
		
	return 0;
}
