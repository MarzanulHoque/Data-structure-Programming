#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str[100];
	int n = 5;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
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
		cout<<str[i]<<"  ";
	cout<<endl;
	
	return 0;
}
