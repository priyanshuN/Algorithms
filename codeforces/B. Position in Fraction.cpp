#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k=0;
    long double a,b,c;
    long double n;
    cin>>a>>b>>c;
    n=a/b;
    for(i=0;i<=10000000000000;++i)
    {
        k=0;
        n=n*10;
        if(int(n)==int(c))
        {
            k=1;
            cout<<i+1;
            break;
        }
        n=n-int(n);
    }
    if(k==0)
        cout<<-1;
    return 0;
}
