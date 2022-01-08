#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j,i=0,m=1,v,c=0,temp,z=0;
    cin>>n>>k;
    vector <int> a(n), b(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        b[i]=i;
    }
    for(int i=1;i<n-1;++i)
    {
        for(int j=i+1;j>0;--j)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                swap(b[j],b[j-1]);
            }
        }
    }
    /*for(int i=0;i<n;++i)
    {
        cout<<a[i];
        cout<<b[i];
    }*/


    return 0;
}
