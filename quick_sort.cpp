#include<bits/stdc++.h>
using namespace std;

int arr[100];

int partition(int start,int end)
{
	int pivot = arr[end];
	int partitionIndex = start;
	for(int i = start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(arr[partitionIndex],arr[end]);
	cout<<endl;
	for(int i=0;i<end;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return partitionIndex;
}

void QuickSort(int start,int end)
{
	if(start<end)
	{
		int partitionIndex = partition(start,end);
		QuickSort(start,partitionIndex-1);
		QuickSort(partitionIndex+1,end);
	}
}

int main()
{
	int start=0,end;
	cin>>end;
	for(int i=0;i<end;i++)
	{
		cin>>arr[i];
	}
	QuickSort(start,end-1);
	cout<<endl;
	for(int i=0;i<end;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;

	return 0;
}
