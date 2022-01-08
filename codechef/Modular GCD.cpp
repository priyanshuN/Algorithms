#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
/*l power(l a,l n)
{
    int mod=1000000007;
    l t;
    if(n==0)
        return 1;
    t=power(a,n/2);
    if(n%2==0)
        return ((t%mod)*(t%mod))%mod;
    else
        return ((a%mod)*(t%mod)*(t*mod))%mod;
}*/
l gcd(l a,l b)
{
    if (a == 0)
       return b;
    return gcd(b%a,a);
}
l power(l a,l n)
{
    l t = 1;
    int mod=1000000007;
    while (n>0) {
        if (n&1)
            //t=((t%mod)*(a%mod))%mod;
            t=(t*a)%mod;
        n=n>>1;
        //a=((a%mod)*(a%mod))%mod;
        a=(a*a)%mod;
    }
    return t;
}
int main()
{
    int t1;
    cin>>t1;
    for(int i=0;i<t1;++i)
    {
    int mod=1000000007;
    l a,b,n,k;
    cin>>a>>b>>n;
    k=a-b;
    k=k%mod;
    //cout<<power(10000000,10000000)%mod;
    l z=((power(a,n)%mod) /*+ (power(b,n)%mod))%mod*/);
    l m=(gcd(z,k))%mod;
    //cout<<z<<endl;
    /*if(k==0)
        cout<<z%mod<<endl;
    else
        cout<<m<<endl;*/
        cout<<z<<endl;
    }
    return 0;
}
