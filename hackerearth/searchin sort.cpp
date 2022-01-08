#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n,temp;
    int a[1000];
    cin>>x;
    for(i=0;i<x;++i)
    {
        cin>>a[i];
    }
    for(j=0;j<x-1;++j)
    {
        temp=a[j];
        for(i=j;i<x;++i)
        {
            if(temp>=a[i])
            {
                temp=a[i];
                n=i;
            }
        }
        a[n]=a[j];
        a[j]=temp;
    }
    for(i=0;i<x;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
