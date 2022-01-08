#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,s,k=0;
    cin>>p>>s;
    int a[p][s],c[p];
    for(int i=0;i<2*p;++i)
    {
       for(int j=0;j<s;++j)
       {
           cin>>a[i][j];
       }
       /*if(i%2==1)
       {
           c[k++]=make_pair(a[i-1],a[i]);
       }*/
    }
    for(int i=1;i<n;i=i+2)
    {
        for(int j=0;j<s;++j)
        {
            if(a[i][j]>a[i][j+1 ])
        }
    }
    return 0;
}
