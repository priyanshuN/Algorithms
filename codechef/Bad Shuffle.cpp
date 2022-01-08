#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    if(n>1)
    {
        cout<<2<<' '<<1;
        for(int i=3;i<=n;++i)
        {
            cout<<i<<' ';
        }
    }
    return 0;
}
