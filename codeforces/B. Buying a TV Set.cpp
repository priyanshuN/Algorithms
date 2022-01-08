#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    long long int a,b,x,y,w,k,z;
    cin>>a>>b>>x>>y;
    //z=min(a,((x/y)*b));
    //k=min(b,(a*(y/x)));
    //cout<<z<<' '<<k<<endl;
    /*if(x%y==0)
    {
        cout<<k;
    }
    else if(y%x==0)
    {
        cout<<z;
    }*/

        long long int l;
        /*if(b<(y*a/x))
        {
            long long int j=b/y;
            cout<<j;
        }
        else if(a<(b*x/y))
        {
            long long int l=a/x;
            cout<<l;
        }*/
        long long int j=gcd(x,y);
        //cout<<j<<endl;
        long double s=a,q=b,h=x,t=y,m=(s/q),v=(h/t);
        //cout<<m<<' '<<v;
        if(m-v>0)
        {
            k=b;
            l=k/(y/j);
        }
        else{
            l=a/(x/j);;
        }
        cout<<l;
    return 0;
}
