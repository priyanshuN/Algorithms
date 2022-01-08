#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,z,k;
    cin>>x>>y>>i>>j;
    z=x-i;
    k=y-j;
    if(x-i==0)
    {
        cout<<x+y-j<<' '<<y<<' '<<i+y-j<<' '<<j;
    }
    else if(y-j==0)
    {
        cout<<x<<' '<<y+x-i<<' '<<i<<' '<<j+x-i;
    }
    else if(k==z||k==-z)
    {
        cout<<x<<' '<<j<<' '<<i<<' '<<y;
    }
    else
        cout<<-1;
    return 0;
}
