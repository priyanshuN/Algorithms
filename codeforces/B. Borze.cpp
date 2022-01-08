#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    char a[250];
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]=='.')
        {
            cout<<0;
        }
        else if(a[i]=='-'&&a[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(a[i]=='-'&&a[i+1]=='-')
        {
            cout<<2;
            i++;
        }
    }
}
