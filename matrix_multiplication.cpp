#include<bits/stdc++.h>
using namespace std;

int m,n,p,arr1[100][100],arr2[100][100],arr3[100][100];

void multiplication(int m,int p,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr3[i][j] = 0;
			for(int k=0;k<p;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
}
void print()
{
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main()
{
	cin>>m>>p>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			cin>>arr1[i][j];
		}
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr2[i][j];
		}
	}
	multiplication(m,p,n);
	print();
	return 0;
}
