#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        int n,x,s;
        cin>>n>>x>>s;
        int a[s+1],b[s+1];
        int t=x;
        for(int i=0;i<s;++i)
        {
            cin>>a[i]>>b[i];
            if(t==a[i])
            {
                t=b[i];
            }
            else if(t==b[i])
            {
                t=a[i];
            }
            //cout<<t<<' '<<endl;
        }
        cout<<t<<endl;
    }
    return 0;
}
