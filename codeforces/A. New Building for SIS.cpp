#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,b,q;
    cin>>n>>h>>a>>b>>q;
    for(int i=0;i<q;++i)
    {
        int z=0;
        int t1,f1,t2,f2;
        cin>>t1>>f1>>t2>>f2;
        if(f1>a&&f1<b&&f2<b&&f2>a)
        {
            z+=abs(t2-t1)+abs(f1-f2);
            cout<<z<<endl;
        }
        else {
        if(t1==t2)
            z=abs(f1-f2);
        else if(abs(f1-a)+abs(f2-a)<abs(f1-b)+abs(f2-b))
            z=abs(f1-a)+abs(f2-a);
        else
            z=abs(f1-b)+abs(f2-b);
        z+=abs(t2-t1);
        cout<<z<<endl;
        }
    }
    return 0;
}
