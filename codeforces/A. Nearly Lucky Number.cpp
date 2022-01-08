#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,k,z=0;
    cin>>n;
    while(n)
    {
        if(n%10==4||n%10==7)
        {
            z+=1;
        }
        n=n/10;
    }
    while(z)
    {
        k=0;
        if(z%10==4||z%10==7)
        {
            k=1;
        }
        else
            break;
        z=z/10;
    }
    if(k==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
