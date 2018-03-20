#include<bits/stdc++.h>
using namespace std;

bool IsOperand(char ch){
	if(ch>='0' && ch<='9') return true;
	else if(ch>='a' && ch<='z') return true;
	else if(ch>='A' && ch<='Z') return true;
	return false;
}
bool IsOperator(char ch){
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/') return true;
	return false;
}
bool HigherPrecedence(char ch1, char ch2){
	int op1,op2;
	if(ch1=='+' || ch1=='-') op1 = 1;
	else  op1 = 2;
	if(ch2=='+' || ch2=='-') op2 = 1;
	else  op2 = 2;
	if(op1>=op2) return true;
	return false;
}

string infixToPostfix(string exp)
{
	stack<char>s;
	string postfix = "";
	for(int i=0;exp[i]!=NULL;i++){
		if(exp[i]==' ' || exp[i]==',') continue;
		
		if(IsOperand(exp[i])){
			postfix += exp[i];
		}
		
		else if(exp[i]=='(')
			s.push(exp[i]);
			
		else if(IsOperator(exp[i])){
			if(!s.empty() && s.top()!='(' && HigherPrecedence(s.top(), exp[i])){
				postfix += s.top();
				s.pop();
			}
			s.push(exp[i]);
		}
		else if(exp[i]==')'){
			while(!s.empty() && s.top()!='('){
				postfix += s.top();
				s.pop();
			}
			s.pop();
		}
	}
	while(!s.empty()){
		postfix += s.top();
		s.pop();
	}
	return postfix;
}

int main()
{
	string exp;
	getline(cin,exp);
	string postfix = infixToPostfix(exp);
	cout<<"\nThe postfix value is: "<<postfix<<endl;
	
	return 0;
}
