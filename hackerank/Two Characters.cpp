#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="abcdefghijklmnopqrstuvwxyz";
    vector <string> a(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<s.size();++i)
    {
        for(int j=0;j<n;++j)
        {
            if(s[i]==a[j])
            {
                c[k]=s[i];
                k++;
                break;
            }
        }
    }

}
