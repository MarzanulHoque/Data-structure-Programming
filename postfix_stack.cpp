#include<bits/stdc++.h>
using namespace std;

bool IsNumber(char ch)
{
	if(ch>='0' && ch<='9') return true;
	return false;
}
bool IsOperator(char ch)
{
	if(ch=='+' || ch=='-' || ch=='*' || ch=='/') return true;
	return false;
}
int operation(char ch,int op1,int op2)
{
	cout<<op1<<" "<<op2<<endl;
	if(ch=='+') return op1 + op2;
	else if(ch=='-') return op1 - op2;
	else if(ch=='*') return op1 * op2;
	else if(ch=='/') return op1 / op2;
}
int EvaluateExp(string exp)
{
	stack<int>s;
	for(int i=0;exp[i]!=NULL;i++)
	{
		if(exp[i]==' ' || exp[i]==',') continue;
		else if(IsNumber(exp[i]))
		{
			int op = 0;
			while(exp[i]!=NULL && IsNumber(exp[i]))
			{
				op = (op*10) + (exp[i] - '0');
				i++;
			}
			i--;
			s.push(op);
		}
		else if(IsOperator(exp[i]))	
		{
			int op2 = s.top(); s.pop();
			int op1 = s.top(); s.pop();
			int result = operation(exp[i],op1,op2);
			
			s.push(result);
		}
	}	
	return s.top();
}

int main()
{
	string exp;
	getline(cin,exp);
	int result = EvaluateExp(exp);
	cout<<"The result is: "<<result<<endl;
	
	return 0;
}
