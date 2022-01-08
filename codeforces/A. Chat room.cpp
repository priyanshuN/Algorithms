#include<iostream>
using namespace std;
#include<string>
#include<string.h>
int main()
{
    int i,n,z=0,k,j,m,h;
    char a[150];
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;++i)
    {
        if(a[i]=='h')
        {
            z+=1;
            break;
        }
    }
    for(j=i+1;j<n;++j)
    {
        if(a[j]=='e')
        {
            z+=1;
            break;
        }
    }
    for(h=j+1;h<n;++h)
    {
        if(a[h]=='l')
        {
            z+=1;
            break;
        }
    }
    for(m=h+1;m<n;++m)
    {
        if(a[m]=='l')
        {
            z+=1;
            break;
        }
    }
    for(k=m+1;k<n;++k)
    {
        if(a[k]=='o')
        {
            z+=1;
            break;
        }
    }
    if(z==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
