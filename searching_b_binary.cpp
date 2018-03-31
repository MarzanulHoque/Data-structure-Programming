#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str[100],item="Karim";
	int n,loc=-1;
	n=7;
	for(int i=0;i<n;i++)
		cin>>str[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(str[i]>str[j]){
				string temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<str[i]<<endl;
	cout<<endl;
	
	int beg,end,mid;
	beg = 0;  end = n-1;  mid = int((beg+end)/2);
	while(beg<=end && str[mid]!=item){
		if(item<str[mid])
			end = mid - 1;
		else
			beg = mid + 1;
		mid = int((beg+end)/2);
	}
	if(str[mid]==item) loc = mid;
	if(loc>-1) cout<<"The location is: "<<loc<<endl;
	else cout<<"Item not found"<<endl;
	
	return 0;
}
