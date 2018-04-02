#include<bits/stdc++.h>
using namespace std;

long long fib[100];

long long fib_ans(int n)
{
    if(n==0 || n==1)
    {
        return fib[n] = n;
    }
    else if(fib[n]!=-1)
    {
        return fib[n];
    }
    else
    {
        return fib[n] = fib_ans(n-1)+fib_ans(n-2);
    }
}

int main()
{
    for(int i=0;i<100;i++)
    {
        fib[i] = -1;
    }
    int n;
    cin>>n;
    long long x = fib_ans(n);
    for(int i=0;i<100;i++)
    {
        cout<<fib[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
