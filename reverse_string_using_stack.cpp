#include<bits/stdc++.h>
using namespace std;

void reverse(char *C,int n){
	stack<char>s;
	for(int i=0;i<n;i++){
		s.push(C[i]);
	}
	for(int i=0;i<n;i++){
		C[i] = s.top();
		s.pop();
	}
	return;
}

int main()
{
	char ch[100];
	gets(ch);
	reverse(ch,strlen(ch));
	cout<<ch<<endl;
	
	return 0;
}
