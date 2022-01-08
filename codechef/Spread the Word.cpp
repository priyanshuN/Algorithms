#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n;
        cin>>n;
        long long int a[n];
        long long int c[n];
        for(int j=0;j<n;++j)
        {
            //c[i]=0;
            cin>>a[j];
        }
        c[0]=a[0];
        for(int j=1;j<n;++j)
        {
            c[j]=c[j-1]+a[j];
            //cout<<c[j]<<endl;
        }
        long long int z=a[0],m,x=0,b=1;
        //cout<<z<<endl;
        if(z>=n)
            cout<<1<<endl;
        else{
        while(1)
        {
            m=b;
            if(z>=n||b>n)
                break;
            /*for(int j=b;j<z+b&&j<n;++j)
            {
                m+=a[j];
            }*/
            else if(z+b>n)
            {
                 //m=c[n-1]-c[b-1];
                 b+=z;
                z=c[n-1];
            }
            else
            {
                //m=c[z+b-1]-c[b-1];
                b+=z;
                z=c[z+m-1];
            }
            //cout<<z<<endl;
            //b+=z;
            x++;
            //z=;
        }
        cout<<x<<endl;
        }
    }
    return 0;
}
