#include<iostream>
using namespace std ;
int main()
{
    long long int i,j,a,m,n,z;
    cin>>i>>j>>a;
    if(i%a==0)
    {
        m=i/a;
    }
    else
        m=i/a+1;
    if(j%a==0)
        n=j/a;
    else
        n=j/a+1;
    z=m*n;
    cout<<z;
    return 0;
}
