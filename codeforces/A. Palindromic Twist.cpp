#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,k=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n/2;++j)
        {
            if(abs(s[j]-s[n-j-1])==0||abs(s[j]-s[n-j-1])==2)
                continue;
            else
            {
                k=1;
                break;
            }
        }
        if(k==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
