#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr[100],item="Karim";
	int loc=-1,n;
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
