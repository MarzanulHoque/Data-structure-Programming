#include<bits/stdc++.h>
using namespace std;
#define maxsize 1001
int arr[maxsize];
int top = -1;

void push(int x){
	if(top == maxsize-1){
		cout<<"Stack overflow"<<endl;
		return;
	}
	arr[++top] = x;
	return;
}
void pop(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
		return;
	}
	top--;
	return;
}
bool inEmpty(){
	if(top==-1) return true;
	else return false;
}

int Top(){
	return arr[top];
}
void print(){
	for(int i=0;i<=top;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;
	return;
}
int main()
{
	push(10);
	push(5);
	pop();
	push(10);
	print();
	return 0;
	
}
