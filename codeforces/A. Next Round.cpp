#include<iostream>
using namespace std;
int main()
{
    int n,k,z=0,b=0,i;
    int a[10000];
    cin>>n>>k;
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
            z+=1;
    }
    cout<<z;
    return 0;
}
