#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
    cin>>n>>l;
    long double a[n];
    for(long long int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    double z=0;
    if((a[0]-(l-a[n-1]))>0)
        z=a[0];
    else
        z=(l-a[n-1]);
    for(long long i=0;i<n-1;++i){
        if((a[i+1]-a[i])/2-z>0){
            z=(a[i+1]-a[i])/2;
        }
    }
    printf("%.9f",z);
    return 0;
}
