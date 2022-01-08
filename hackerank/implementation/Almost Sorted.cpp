#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z=0,i,j=0,k=0,m=0,n;
    cin>>n;
    int a[n+1],b[n],c[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;++i)
    {
        if(a[i]>a[i+1])
        {
            b[j]=i+1;
            j++;
            z+=1;
        }
        else if(a[i]<a[i+1])
        {
            c[k]=i;
            k++;
            m+=1;
        }
    }
    int v=0,d=c[k];
    if(z==0)
        cout<<"yes";
    else if(z==2)
        cout<<"yes"<<endl<<"swap"<<' '<<b[0]<<' '<<b[1];
    else if(m==2)
    {
        for(i=c[0]+1;i<=d;++i)
        {
            swap(a[i],a[d-i]);
        }
       for(i=0;i<n;++i)
       {
           if(a[i]>a[i+1])
           {
               v+=1;
           }
       }
       if(v==0)
        cout<<"yes"<<endl<<"reverse"<<' '<<c[0]+1<<' '<<d;
    }

    else if(n==2&&z==0)
        cout<<"yes";
    else if(n==2&&z==1)
        cout<<"yes"<<endl<<"swap"<<' '<<1<<' '<<2;
    else
        cout<<"no";
    return 0;
}
