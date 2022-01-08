#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    char a[101],b[101],c[101];
    cin>>a>>b;
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]==b[i])
        {
            c[i]='0';
        }
        else
            c[i]='1';
    }
    c[n]='\0';
    cout<<c;
    return 0;
}
