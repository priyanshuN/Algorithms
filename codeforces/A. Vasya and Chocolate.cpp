#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        long long int s,a,b,c,z,x;
        cin>>s>>a>>b>>c;
        z=s/(a*c) ;
        cout<<b*z+a*z+(s%( a*c))/c<<endl;;
    }
    return 0;
}
