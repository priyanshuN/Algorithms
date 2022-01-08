#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        string a,b;
        cin>>a>>b;
        int c[6]={0};
        for(int j=0;j<3;++j)
        {
            if(a[j]=='b'||b[j]=='b')
                c[j]=1;
            if(a[j]=='o'||b[j]=='o')
                c[j+3]=1;
        }
        int z=0;
        for(int j=0;j<3;++j)
        {
            if(c[j+3]==1)
            {
                if(c[(j+1)%3]==1&&c[(j+2)%3]==1)
                {
                    z=1;
                    cout<<"yes"<<endl;
                    break;
                }
            }
        }
        if(z==0)
            cout<<"no"<<endl;
    }
    return 0;
}
