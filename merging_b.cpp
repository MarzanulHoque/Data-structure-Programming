#include<bits/stdc++.h>
using namespace std;

int main()
{
	char arr1[100],arr2[100],arr3[200];
	int m,n,k;
	cin>>arr1>>arr2;
	m = strlen(arr1);
	n = strlen(arr2);
	k = m+n;
	
	int i,j=0;
	for( i=0;i<k;i++){
		if(i<m)
			arr3[i] = arr1[i];
		else{
			arr3[i] = arr2[j];
			j++;
		}
	}
	arr3[i] = '\0';
	cout<<arr3<<endl;
	return 0;
}
