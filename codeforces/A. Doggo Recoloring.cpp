#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,z=0;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
      cout<<"Yes";
    else
    {
    for(int i=97;i<=122;++i)
    {
        k=0;
        for(int j=0;j<s.size();++j)
        {
            if(s[j]==i)
            {
                k++;
            }
            if(k>=2)
            {
                z=1;
                break;
            }
        }
        if(z==1)
            break;
    }
    if(z==1)
        cout<<"Yes";
    else
        cout<<"No";
    }
    return 0;
}
