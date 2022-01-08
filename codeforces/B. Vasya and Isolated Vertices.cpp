#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int z,mi,ma,x;
    z=(n-2)*(n-1)/2;
    if(m==0)
        cout<<n<<' '<<n;
    else if(m==1&&n==2)
        cout<<0<<' '<<0;
    else if(m>z)
        cout<<0<<' '<<0;
    else if(m>=(n+1)/2)
    {
        mi=0;
        long double s=sqrt(2*m);
        ma=ceil(s);
        long double x1=m-(ma*(ma-1)/2);
        long long int d=ceil(x1/ma);
         //cout<<d<<endl;
        //cout<<ma<<' '<<x<<ceil(double(x/ma))<<endl;
        cout<<mi<<' '<<n-ma-d;

    }
    else
    {
        mi=n-2*m;
        //ma=n-(m+1);
        long double s=sqrt(2*m);
        ma=ceil(s);
        long double x1=m-(ma*(ma-1)/2);
        long long int d=ceil(x1/ma);
        cout<<mi<<' '<<n-ma-d;
    }
    return 0;
}
