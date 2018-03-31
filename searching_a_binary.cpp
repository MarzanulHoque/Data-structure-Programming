#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],n,item=77,loc=-1;
	n=7;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int beg,end,mid;
	beg = 0;  end = n-1;  mid = int((beg+end)/2);
	while(beg<=end && arr[mid]!=item){
		if(item<arr[mid])
			end = mid - 1;
		else
			beg = mid + 1;
		mid = int((beg+end)/2);
	}
	if(arr[mid]==item) loc = mid;
	if(loc>-1) cout<<"The location is: "<<loc<<endl;
	else cout<<"Item not found"<<endl;
	
	return 0;
}
