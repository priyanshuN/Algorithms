#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,i,j;
    cin>>n>>m;
    for(i=n+1;i>0;++i)
    {
        for(j=2;j<=i;++j)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            break;
    }
    if(j==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
