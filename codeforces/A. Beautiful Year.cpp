#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z,m,k,a,i;
    cin>>n;
    n+=1;
    for(i=0;i>=0;++i)
    {
        z=n%10;
        k=int(n/10)%10;
        m=int(n/100)%10;
        a=n/1000;
        if(z==k||z==m||z==a||k==m||k==a||m==a)
        {
            n+=1;
        }
        else
        {
            cout<<n;
            break;
        }
    }
    return 0;
}
