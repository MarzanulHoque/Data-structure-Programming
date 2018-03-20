#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	getchar();
	
	while(n--)
	{
		stack<char>s;
		char str[200];
		gets(str);
				
		for(int i=0;str[i]!='\0';i++){
			if(str[i]=='(' || str[i]=='[')
				s.push(str[i]);
			else if(str[i]==')' || str[i]==']'){
				if(s.empty()){
					s.push('a');
					break;
				}
				else if(str[i]==']' && s.top()!='['){
					s.push('a');
					break;
				}
				else if(str[i]==')' && s.top()!='('){
					s.push('a');
					break;
				}
				else
					s.pop();
			}
		}
		if(s.empty()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
