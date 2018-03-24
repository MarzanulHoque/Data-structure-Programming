#include<bits/stdc++.h>
using namespace std;

int n;
int DST[10000];

void inOrder(int root)
{
	if(DST[root] == -1)
		return;
	inOrder(root*2+1);
	cout<<"The value is: "<<DST[root]<<endl;
	inOrder(root*2+2);
	return;
}

int main()
{
	cout<<"\nPut the number of index of total nodes: ";
	cin>>n;
	int data;
	for(int i=0;i<10000;i++) 
		DST[i] = -1;
	
	for(int i=0;i<n;i++){
		cin>>data;
		int loc = 0;
		while(true){
			if(DST[loc]==-1){
				DST[loc] = data;
				break;
			}
			else if(data<=DST[loc]) 
				loc = loc*2 + 1;
			else if(data>DST[loc])
				loc = loc*2 + 2;
			if(loc==n){
				cout<<"\nArray overflow!!"<<endl;
			}			
		}
	}
	inOrder(0);
	return 0;
}
