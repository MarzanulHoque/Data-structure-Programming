#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr1[100],arr2[100],arr3[200];
	int m,n,k;
	m = 5; n = 4; k = m+n;
	for(int i=0;i<m;i++)
		cin>>arr1[i];
	for(int i=0;i<n;i++)
		cin>>arr2[i];
	int j=0;
	for(int i=0;i<k;i++){
		if(i<m)
			arr3[i] = arr1[i];
		else{
			arr3[i] = arr2[j];
			j++;
		}
	}
	for(int i=0;i<k;i++)
		cout<<arr3[i]<<"  ";
	cout<<endl;
	return 0;
}
