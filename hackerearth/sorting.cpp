#include<iostream>
using namespace std;
int main()
{
    int i,j,x,temp;
    int a[1000];
    cin>>x;
    for(i=0;i<x;++i)
    {
        cin>>a[i];
    }
    for(j=0;j<x-1;++j)
    {
        for(i=0;i<x-j-1;++i)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<x;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
