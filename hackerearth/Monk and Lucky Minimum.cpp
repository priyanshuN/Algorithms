#include<iostream>
using namespace std;
int main()
{
    int i,j,x,n,temp,z;
    long int a[100000];
    cin>>x;
    for(j=0;j<x;++j)
    {
        z=0;
        cin>>n;
        for(i=0;i<n;++i)
        {
            cin>>a[i];
        }
        temp=a[1];
        for(i=1;i<n;++i)
        {
            if(temp>a[i])
            {
                temp=a[i];
            }
        }
        for(i=0;i<n;++i)
        {
            if(a[i]==temp)
                z+=1;
        }
        /*cout<<z;*/
        if(z%2==0)
            cout<<"Unlucky";
        else
            cout<<"Lucky";
        cout<<"\n";
    }
    return 0;
}
