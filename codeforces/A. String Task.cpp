#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int n,i,z,k,j;
    char a[300],b[300],c[300];
    cin>>a;
    n=strlen(a);
    //cout<<n<<endl;
    for(i=0;i<n;++i)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]+=32;
        }
    }
   // cout<<a;
 /*   for(k=0;k<n;++k)
    {
        int temp;
        for(i=0;i<n-k-1;++i)
        {
            if(a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==86||a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }*/

   /* for(i=0;i<n;++i)
    {
        if(a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==86||a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
            break;
        else
            b[i]=a[i];

    }

    z=strlen(b);
    for(i=0;i<2*z;++i)
        c[i]='.';
    for(i=1,j=0;i<2*z+2,j<z;++i,++j)
        c[i]=b[j];
    for(i=0;i<2*n;++i)
        cout<<c[i];*/
    j=0;
    for(i=0;i<n;++i)
    {
        if(a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
        {
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;++i)
    {
        cout<<'.'<<b[i];
    }
    return 0;
}
