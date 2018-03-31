#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],n,item=77,loc=-1;
	n=7;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		if(item==arr[i]){
			loc = i;
			break;
		}
	}
	if(loc>-1) cout<<"The location is: "<<loc<<endl;
	else cout<<"Item not found"<<endl;
	
	return 0;
}
