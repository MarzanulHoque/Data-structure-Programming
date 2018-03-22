#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Making Dynamic list using array
	int A[100000];
	int end = -1,x;
	while(scanf("%d",&A[end+1])!=EOF){
		end++;
	}
	 
	for(int i=0;i<=end;i++)
		cout<<A[i]<<"  ";
	cout<<endl;
	
	cout<<"Now give a value and index to insert"<<endl;
	
	int value,index;
	cin>>value>>index;
	
	for(int i = end; i>=index ; i--){
		A[i+1] = A[i];
	}
	A[index] = value;
	end++;
	for(int i = 0; i <= end; i++)
		cout<<A[i]<<"  ";
	cout<<endl;
	
	cout<<"Now give a index to delete"<<endl;
	cin>>index;
	for(int i=index;i<end;i++){
		A[i] = A[i+1];
	}
	end -= 1;
	for(int i=0;i<=end;i++)
		cout<<A[i]<<"  ";
	cout<<endl<<"Now it will sort the list in ascending order"<<endl;
	for(int i=0;i<=end;i++){
		for(int j=i+1;j<=end;j++){
			int temp;
			if(A[i]<A[j]){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	for(int i=0;i<=end;i++)
		cout<<A[i]<<"  ";
	cout<<endl;
	
		
	return 0;
}
