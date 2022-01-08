#include<bits/stdc++.h>
using namespace std;
void permutate(string s,int l,int r)
{
    if(l==r-1)
    {
        cout<<s<<endl;
        return ;
    }
    for(int i=0;i<r;++i)
    {
        swap(s[l],s[i]);
        permutate(s,l+1,r);
        swap(s[l],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    permutate(s,0,s.size());
    return 0;
}
