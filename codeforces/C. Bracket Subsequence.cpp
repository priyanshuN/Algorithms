#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,z;
    cin>>n>>k;
    z=n;
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='(')
            a.push_back(s[i]);
        if(s[i]==')')
        {
            if(z>k)
            {
               a.pop_back();
               z=z-2;
            }
            else
                a.push_back(s[i]);
        }
    }
    for(int i=0;i<a.size();++i)
        cout<<a[i];
    return 0;
}
